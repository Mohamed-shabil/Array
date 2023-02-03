#include<stdio.h>

int main(){
    int arr1[9] ={34,56,54,32,67,89,90,32,21};
    int arr2[9];
    int i,j=8;

    for ( i = 0; i <9; i++)
    {
        printf("%d \t",arr1[i]);
    }

    printf("\n");

    for(i=0;i<9;i++){
        arr2[i] = arr1[j];
        j--;
    }

    for(i=0;i<9;i++){
        printf("%d \t",arr2[i]);
    }
    
}