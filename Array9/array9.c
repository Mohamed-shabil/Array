// Write a program in C to sort elements of array in ascending order 

#include<stdio.h>

void main(){
    int n,a[100],i,j,temp;
    printf("Input the size of array :");
    scanf("%d",n);
    printf("Input %d elements in the array",n);
    for(i=0;i<n;i++){
        scanf("%d",a[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    printf("sorted Array :");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

}