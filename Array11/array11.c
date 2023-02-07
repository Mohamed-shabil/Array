// Write a program in C to delete an element at desired position from an array
#include<stdio.h>
void main(){
    int i,n,pos,a[100];

    printf("Enter the limit");
    scanf("%d",&n);
    printf("enter the elements ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter the position of the element to be delete");
    scanf("%d",&pos);

    // Where i start from the position that want to be deleted,
    // i must increment until it become less than the limit n
    // and inside loop if i =1 at starting then it replacing next value to the i'th position.

    for(i=pos;i<n-1;i++){
        a[i]=a[i+1];
    }

    printf("Final array");

    // after deletion n become n-1
    for(i=0;i<n-1;i++){
        printf("&d\t",a[i]);
    }

}