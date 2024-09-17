#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void accept_Name(char **names, int n) 
{
    for (int i = 0; i < n; i++) 
	{
        names[i] = (char *)malloc(100 * sizeof(char)); 
        if (names[i] == NULL) 
		{
            printf("Memory allocation failed!\n");
            exit(1);
        }
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", names[i]); 
    }
}


void print_Names(char **names, int n) 
{
    printf("Student names:\n");
    for (int i = 0; i < n; i++) 
	{
        printf("%s\n", names[i]);
    }
}

void sort_Names(char **names, int n) 
{
    char *temp;
    for (int i = 0; i < n - 1; i++) 
	{
        for (int j = i + 1; j < n; j++)
		{
            if (strcmp(names[i], names[j]) > 0) 
			{
                temp = names[i];
                names[i] = names[j];
                names[j] = temp;
            }
        }
    }
}


void free_Memory(char **names, int n)
{
    for (int i = 0; i < n; i++) 
	{
	
        free(names[i]);  
    }
}

int main()
{
    int n = 5;
    char *names[n];

    accept_Name(names, n);  
    printf("\nBefore sorting:\n");
    print_Names(names, n);   

    sort_Names(names, n);   
    print_Names(names, n);  

    free_Memory(names, n);   

    return 0;
}
