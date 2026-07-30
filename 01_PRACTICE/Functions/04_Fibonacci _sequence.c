//Fibonacci sequence — write a function that prints the first n Fibonacci numbers
#include<stdio.h>
void fib(int n);
int main(){
int n ;
printf("Enter n :");
scanf("%d",&n);
fib(n);
    return 0;
}
void fib(int n){
int a = 0;
int b = 1;
int c ;
for(int i =0;i<n;i++){
    printf("%d \t",a);
    c = a+b;
    a = b;
    b = c;
}
}
 
