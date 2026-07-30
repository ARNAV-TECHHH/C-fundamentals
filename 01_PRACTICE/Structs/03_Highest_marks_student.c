//Find the student with the highest marks from an array of structs

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
   printf("Name:");
   scanf("%s",students[i].name);
   printf("roll:");
scanf("%d",&students[i].roll);
   printf("marks:");
   scanf("%f",&students[i].marks);
    }
    int highest = 0;

     for(int j = 1;j<3;j++){
        if( students[j].marks > students[highest].marks){
     highest = j;
        }
    }
        
     printf("Student Name: %s\n", students[highest].name);
    printf("Roll Number: %d\n", students[highest].roll);
    printf(" Highest Marks: %.2f\n", students[highest].marks);
        
     
     

    return 0;
}