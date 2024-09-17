#include <stdio.h>
#include <stdlib.h>

void copy_file_line_by_line(const char *source_abc, const char *dest_xyz);

int main() {
    const char *source_abc = "source.txt";
    const char *dest_xyz = "destination.txt";

    copy_file_line_by_line(source_abc, dest_xyz);

    return 0;
}

void copy_file_line_by_line(const char *source_abc, const char *dest_xyz) 
{
    FILE *src_file = fopen(source_abc, "r");
    if (src_file == NULL) 
	{
        perror("Error opening source file for reading");
        exit(EXIT_FAILURE);
    }

    FILE *dst_file = fopen(dest_xyz, "w");
    if (dst_file == NULL) {
        perror("Error opening destination file for writing");
        fclose(src_file);
        exit(EXIT_FAILURE);
    }

    char line[1024]; 
    while (fgets(line, sizeof(line), src_file) != NULL) 
	{
        fputs(line, dst_file);
    }

    fclose(src_file);
    fclose(dst_file);
}

