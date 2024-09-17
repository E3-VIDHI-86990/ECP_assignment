#include <stdio.h>
#include <string.h>

int is_char_in_string1(char ch, const char *string1) {
    for (int i = 0; string1[i] != '\0'; i++) {
        if (string1[i] == ch) {
            return 1;  
        }
    }
    return 0; 
}

void remove_occurrences(char *string1, char *string2) {
    int i, j = 0;
    int len = strlen(string2);
    for (i = 0; i < len; i++)
	{
        if (!is_char_in_string1(string2[i], string1)) {
            string2[j++] = string2[i];
        }
    }
    string2[j] = '\0';
}

int main() {
    char string1[100], string2[100];
    printf("Enter the first string (characters to remove): ");
    fgets(string1, sizeof(string1), stdin);
    string1[strcspn(string1, "\n")] = '\0';
    printf("Enter the second string (from which to remove characters): ");
    fgets(string2, sizeof(string2), stdin);
    string2[strcspn(string2, "\n")] = '\0'; 
    remove_occurrences(string1, string2);
    printf("Modified string: %s\n", string2);

    return 0;
}

