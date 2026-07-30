//Print all prime numbers between 1 and 100 using nested loops (outer loop checks each number, inner loop tests divisibility).

#include<stdio.h>
int main(){
    int num ;
    
   int count;
   for(int i = 2;i<=100;i++){
    num = i;
    count=0;
    for(int j =2;j <=num-1;j++){
      if(num%j==0){
        count=1;
      break;
      }
    }
        
     if(count == 0){
    printf("%d ", num);
}         
   }
   
    return 0 ;
}