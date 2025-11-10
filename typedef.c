#include <stdio.h>

typedef struct {
    int id;
    char name[50];
    float marks;
} Student;   

int main() {
    Student s1 = {101, "Karthika", 95.5};  
    Student *ptr = &s1;  


    
    printf("Student Details:\n");
    printf("ID: %d\n", ptr->id);
    printf("Name: %s\n", ptr->name);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}