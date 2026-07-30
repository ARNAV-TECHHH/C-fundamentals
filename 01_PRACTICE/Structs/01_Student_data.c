//Store and print a single student's data using a struct (name, roll number, marks)

#include<stdio.h>
#include<string.h>
struct student {
    char name[50];
    int roll;
    float marks;
};
int main(){
    struct student s1;
    strcpy(s1.name,"A");
    s1.roll =1234;
    s1.marks=100.00;

    printf("Name is :%s\n",s1.name);
    printf("roll number is : %d\n",s1.roll);
    printf("marks:%.2f\n",s1.marks);



    return 0;
}