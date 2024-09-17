#include <stdio.h>


void check_and_xor(char ch)
{
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
	{
    printf("Character '%c' is an alphabet.\n", ch);
    char xor_result = ch ^ 32;
    printf("Result of XOR with 32: '%c'\n", xor_result);
      }  
	    else 
	    {
         printf("Character '%c' is not an alphabet.\n", ch);
         }
}

int main() 
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    check_and_xor(ch);
    return 0;
}
