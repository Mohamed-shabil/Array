// Write a program in C to read n number of values in an array and display it in reverse order

#include<stdio.h>
void main(){
    int arr[10];
    int i,n;

    printf("Enter the Number of Elements");
    scanf("%d",&n);
    printf("Enter the Elements");
    for ( i = 0; i <=n; i++)
    {
        scanf("%d",&arr[i]);
    };

    printf("Entered Numbers is: ");
    for ( i = 0; i <=n; i++)
    {
        printf("%d \n",arr[i]);
    }

    printf("Entered Numbers in Reverse order ");

    for ( i = n; i >=0 ; i--)
    {
        printf("%d\n",arr[i]);
    }
    
}