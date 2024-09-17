 #include <stdio.h>
#include <stdlib.h>

void read_file(const char *abc);
void copy_file(const char *source, const char *dest);

int main() {
    const char *source_abc = "file.txt";
    const char *dest_xyz = "filed.txt";
    read_file(source_abc);
    copy_file(source_abc, dest_xyz);

    return 0;
}

void read_file(const char *abc) {
    FILE *file = fopen(abc, "w");
    if (file == NULL) {
        perror("Error opening file for writing");
        exit(EXIT_FAILURE);
    }

    char arr[100]; 

    printf("Enter text  ");
    fgets(arr, sizeof(arr), stdin);

    fprintf(file, "%s", arr);

    fclose(file);
}

void copy_file(const char *source, const char *dest) {
    FILE *src_file = fopen(source, "r");
    if (src_file == NULL) {
        perror("Error opening source file for reading");
        exit(EXIT_FAILURE);
    }

    FILE *dst_file = fopen(dest, "w");
    if (dst_file == NULL) {
        perror("Error opening destination file for writing");
        fclose(src_file);
        exit(EXIT_FAILURE);
    }

    int ch;
    while ((ch = fgetc(src_file)) != EOF) {
        fputc(ch, dst_file);
    }

    fclose(src_file);
    fclose(dst_file);
}

