// Write a program in C to copy the elements of one array into another array

#include<stdio.h>

int main(){
    int n,i,j;
    int arr1[n],arr2[n];
    printf("enter the limit of the array\n");
    scanf("%d",&n);

    printf("Enter the elements in the array");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr1[i]);
    };

    printf("elements in the array1:");
    for( i = 0; i < n; i++){
        printf("%d \n",arr1[i]);
    };
    printf("elements in the array2:");
    for ( i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];

        printf("%d \n",arr2[i]);  
    }
    
    
    return 0;
}