#include <stdio.h>
#include <string.h>


struct Student {
    char name[100];         
    unsigned int age : 6;     
    unsigned int standard : 4;
    unsigned int gender : 1; 
   };	
    
void display_student(struct Student s)
{
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    printf("Standard: %d\n", s.standard);
    printf("Gender: %s\n", (s.gender == 0) ? "Male" : "Female");
}


int main() {
    struct Student students[3];
    
    for (int i = 0; i < 3; i++) {
        printf("\nEnter information for student %d\n", i + 1);
        
        printf("Enter name: ");
        scanf(" %[^\n]%*c", students[i].name); // Accepting full name including spaces
        
        printf("Enter age (0-32): ");
        scanf("%d", students[i].age);
        
        printf("Enter standard (1-12): ");
        scanf("%d", students[i].standard);
        
        printf("Enter gender (0 for Male, 1 for Female): ");
        scanf("%d", students[i].gender);
    }

   
    printf("\nDisplaying student information:\n");
    for (int i = 0; i < 3; i++) {
        printf("\nStudent %d:\n", i + 1);
        display_student(students[i]);
    }

    return 0;
}
