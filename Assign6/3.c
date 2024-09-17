#include <stdio.h>
#include <string.h>



void remove_char(char *str, char char_to_remove) 
{
    int i, j = 0;
    int len = strlen(str);

    for (i = 0; i < len; i++) 
	{
        if (str[i] != char_to_remove) {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';
}

int main() {
    char str[100];
    char char_to_remove;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Enter the character to remove: ");
    scanf("%c", &char_to_remove);
    remove_char(str, char_to_remove);
    printf("String after removing '%c': %s\n", char_to_remove, str);

    return 0;
}

