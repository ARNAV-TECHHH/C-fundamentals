//Factorial using recursion — write a function factorial (int n) that calls itself
#include<stdio.h>
 int factorial(int n);
int main(){
    int n;
    printf("enter factorial");
    scanf("%d",&n);
    printf("%d",factorial(n));
    
    return 0;
}
int factorial(int n){
    if(n==1){
        return 1;
    }
        return n * factorial(n-1);
    
} 