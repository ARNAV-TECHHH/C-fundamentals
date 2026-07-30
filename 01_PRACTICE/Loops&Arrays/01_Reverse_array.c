//reverse array

#include<stdio.h>
int main(){
    int integer[5]={10,20,30,40,50};
    for(int i=0; i<=4; i++){
        printf("the original arrays are %d\n", integer[i]);
    }
    
    int start = 0;
    int end = 4;
    int temp;
    
    while (start < end) {
        temp = integer[start];
        integer[start] = integer[end];
        integer[end] = temp;
        start++;
        end--;
    }
    
    for(int i = 0; i <= 4; i++) {
        printf("the reversed array is %d\n", integer[i]);
    }
    
    return 0;
}