//Find GCD of two numbers using a function (try the Euclidean algorithm: repeatedly replace larger number with remainder)
#include<stdio.h>
int gcd(int a, int b);
int main(){
    int a,b;
 printf("enter a , b:\n");
 scanf("%d %d",&a,&b);
 printf("%d\n",gcd(a,b));
    return 0;
}
int gcd(int a, int b){
 int r;
   
  while(b!=0){
  r = a%b;
  a=b;
  b=r;
  }
   return a;
}