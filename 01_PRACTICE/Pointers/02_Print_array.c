//  Print array elements using pointer arithmetic instead of array indexing (e.g.,
//  *arr +i) instead of arr[il)

#include<stdio.h>
int main(){
    int arr[] = {10, 20, 30, 40, 50};
    for(int i=0;i<5;i++){
        printf("%d\t",*(arr+i));
    }
 
    

    return 0;
}