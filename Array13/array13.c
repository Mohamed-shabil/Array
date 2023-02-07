// Write a program in C for addition of two Matrices of same size

#include<stdio.h>
void main(){
    int a1[100][100],a2[100][100],a3[100][100],i,j,n;

    printf("Enter the Matrix Size ");
    scanf("%d",&n);
    
    printf("enter the elements to the first arary");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a1[i][j]);
        }
    }

    printf("enter the elements to the second arary");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a2[i][j]);
        }
    }

    for ( i = 0; i < n; i++)
    {
        for(j=0;j<n;j++){
            a3[i][j]=a1[i][j]+a2[i][j];
        }
    }


    printf("sum of 2 matrix is \n");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%5d",a3[i][j]);
        }
        printf("\n");
    }
    
}