//Write a function that modifies a variable through a pointer parameter.

#include<stdio.h>
void modify(int *p);
int main(){
    int x = 10;
    modify(&x); 
printf(" Outside function: %d\n",x);

    return 0;
}
void modify(int *p){
 *p = 50;
 
 printf("Inside fuction: %d\n",*p);
}
 