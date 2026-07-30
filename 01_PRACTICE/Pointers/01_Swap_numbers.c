//Swap two numbers using pointers

#include<stdio.h>
void swap(int *a,int *b);
int main(){
    int a =10;
    int b = 20;
    printf("before swap : a =%d b=%d\n",a,b);
     swap(&a,&b);
    return 0;
}
 void swap(int *a,int *b){
int temp;
temp = *a;
*a = *b;
*b = temp;
printf("after swap : a=%d b=%d\n",*a,*b);
 }