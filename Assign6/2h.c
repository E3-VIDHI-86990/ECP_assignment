#include<stdio.h>
#include<string.h>


int main(void)
{
	char str[64] = "This is desd classroom";
	char sub_str[20] = "is";
	char *ptr;

	ptr = strstr(str, sub_str);

	printf("str = %u\n", str);
	printf("ptr = %u\n", ptr);
	printf("ptr = %s\n", ptr);



	return 0;
}

