#include <stdio.h>

typedef struct {
    int id;
    char name[100];
    float grade;
} Student;

void write_record(const char *rec, Student student)
{
    FILE *file = fopen(rec, "a");
    if (file == NULL) 
	{
        perror("Unable to open file for writing");
        return;
    }

    fprintf(file, "%d %s %.2f\n", student.id, student.name, student.grade);

    fclose(file);
}

int read_Record(const char *rec, Student *student) 
{
    FILE *file = fopen(rec, "r"); 
    if (file == NULL)
	{
        perror("Unable to open file for reading");
        return -1;
    }

   
    int result = fscanf(file, "%d %99s %f", &student->id, student->name, &student->grade);

    fclose(file);

    if (result == 3) {
        return 0;
    } else {
        return -1; 
    }
}

int main()
{
  write_record(*rec , student);
  read_record(*rec , students);
  return 0 ;
  }


