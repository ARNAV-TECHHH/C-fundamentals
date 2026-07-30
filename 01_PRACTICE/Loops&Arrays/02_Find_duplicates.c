//Find duplicates — given {5, 2, 8, 2, 9, 5, 1}, print numbers that appear more than once 

#include<stdio.h>
int main(){
    int arr[]={5, 2, 8, 2, 9, 5, 1};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i]==arr[j]){
                printf("%d\n", arr[i]);
            }
        }
    }
    return 0;
}