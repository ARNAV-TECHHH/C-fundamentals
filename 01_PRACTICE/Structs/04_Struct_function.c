//Write a function that takes a struct as a parameter and prints its details.

#include <stdio.h>
#include <string.h>
 
struct Student {
    char name[50];
    int roll;
    float marks;
};
void printStudent(struct Student s);

int main() {  
    struct Student s1;
   printf("Name:");
   scanf("%s",s1.name);
   printf("roll:");
scanf("%d",&s1.roll);
   printf("marks:");
   scanf("%f",&s1.marks);
    
   printStudent(s1);
    return 0;
}
void printStudent(struct Student s){
 
   printf("Student Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll);
    printf(" Marks: %.2f\n", s.marks);
}