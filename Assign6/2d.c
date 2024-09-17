#include<stdio.h>

int my_strcmp(const char *str1 , const char *str2);

int main()
{
    char str1[100] = "hello my name is vidhi";
    char str2[100] = "how are you";
    return 0;
	}


int my_strcmp(const char *str1, const char *str2) 
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return *(unsigned char*)str1 - *(unsigned char*)str2;
}

