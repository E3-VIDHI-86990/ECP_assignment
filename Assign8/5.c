#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define MAX_NAME_LENGTH 100

struct Student {
    char name[MAX_NAME_LENGTH];
    int roll_number;
};

void sort_by_roll_number(struct Student students[], int n) {
    struct Student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (students[i].roll_number > students[j].roll_number) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

void sort_by_name(struct Student students[], int n) {
    struct Student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(students[i].name, students[j].name) > 0) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

void display_students(struct Student students[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Roll Number: %d, Name: %s\n", students[i].roll_number, students[i].name);
    }
}

int main() {
    struct Student students[MAX_STUDENTS];
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

  
    for (int i = 0; i < n; i++) {
        printf("Enter roll number for student %d: ", i + 1);
        scanf("%d", &students[i].roll_number);
        printf("Enter name for student %d: ", i + 1);
        scanf("%s", students[i].name);
    }


    sort_by_roll_number(students, n);
    printf("\nStudents sorted by roll number:\n");
    display_students(students, n);

    sort_by_name(students, n);
    printf("\nStudents sorted by name:\n");
    display_students(students, n);

    return 0;
}
