//Array of structs — store data for 3 students and print all of them using a loop
 #include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student students[3];
    for(int i = 0;i<3;i++){
   printf("name:");
   scanf("%s",students[i].name);
   printf("roll:");
scanf("%d",&students[i].roll);
   printf("marks:");
   scanf("%f",&students[i].marks);
    }
     for(int j = 0;j<3;j++){
     printf("Student Name: %s\n", students[j].name);
    printf("Roll Number: %d\n", students[j].roll);
    printf("Marks: %.2f\n", students[j].marks);

     }
     
    return 0;
}