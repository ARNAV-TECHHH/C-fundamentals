//Find the sum of array elements using a pointer to traverse the array instead of indexing

#include<stdio.h>
int main(){
int arr[] = {10, 20, 30, 40, 50};
int *p = arr;
int sum =0;
for(int i = 0;i<5;i++){
    sum = sum + *p;
    p++;

}
printf("Sum = %d\n", sum);
    return 0;
}