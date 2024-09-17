#include<stdio.h>

char* my_strrev(char *str) {
    int start = 0;
    int end = my_strlen(str) - 1;
    char temp;
    
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    return str;
}
int main() {
    char str1[100] = "hello my name is vidhi";
    char str2[100] = "how are you";
	  my_strrev(str1);
    printf("After strrev, str1: %s\n", str1);

	return 0 ;
	}
