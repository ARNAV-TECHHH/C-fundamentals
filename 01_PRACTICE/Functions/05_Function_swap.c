 //Function that swaps two numbers - but this time, using pass by value first (notice it doesn't actually swap the originals)

 #include<stdio.h>
 void swap(int a , int b);
 int main(){
    int a,b;
    
printf("enter a , b:");
scanf("%d %d",&a,&b);
printf("before :%d %d\n",a,b);
swap(a,b);
printf("after :%d %d\n",a,b);
    
    return 0;
 }
 void swap(int a , int b){
    int temp;
    temp =a;
    a=b;
    b = temp;
    printf("inside: %d %d\n",a,b);
 }