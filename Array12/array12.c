// Write a program in C for a 2D array of size 3x3 and print the matrix .

#include<stdio.h>
void main(){

    int n,i,j,a[3][3];

    printf("Enter the Elements to the array ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("final array is :\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }

}