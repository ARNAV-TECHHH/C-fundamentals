//Check if a Number is Prime (using a function)

#include<stdio.h>
int isprime(int n);
int main(){
    int n;
printf("enter number");
scanf("%d",&n);
if (isprime(n))
printf("it is prime%d",n);
else{
  printf("it is  not prime%d",n);  
}
    return 0;
}
int isprime(int n){
    if(n<=1){
        return 0;
    }
    for(int i = 2;i<n;i++){
     if (n % i == 0) {
            return 0;
        }    
    }
    return 1;
}