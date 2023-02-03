//Write a program in C to find the sum of all elements of the array

#include<stdio.h>

int main(){
    int n,i,j=0;
    int arr[n];

    printf("Enter the limit of the array ");

    scanf("%d",&n);

    printf("Enter the elements in the array ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    };

    printf("Sum of elements in the array ");
    for(i=0;i<n;i++){
        j= j+arr[i];
    }
    printf("Sum of the array : %d ",j);
    
    return 0;
}