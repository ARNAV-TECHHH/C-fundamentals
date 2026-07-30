//Find the second largest element in an array without sorting it

#include<stdio.h>
int main(){
    int arr[]={5, 2, 8, 9, 1, 100};
    int n=sizeof(arr)/sizeof(arr[0]);
    int largest = arr[0];
    int secondlargest = arr[0];
    
    for(int i=0; i<n; i++){
        if(arr[i] > largest){
            secondlargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondlargest && arr[i] < largest){
            secondlargest = arr[i];
        }
    }
    
    printf("Second Largest = %d\n", secondlargest);
    return 0;
}