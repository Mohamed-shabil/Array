#include<stdio.h>

int main(){
    int arr1[100],arr2[100],i,j,n,k,temp;

    printf("Enter the limit of the array1 :");
    scanf("%d",&n);

    printf("Enter the elements of the array1 :");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr1[i]);
    }
    
    printf("Enter the elements of the array2 :");
    for(i = 0; i < n; i++){
        scanf("%d",&arr2[i]);
    }
    k=n;
    printf("Merged Array :");
    for(i = 0; i < n; i++){
        arr1[k]=arr2[i];
        k++;
    }
    for(i = 0; i <k; i++){
        printf("%d\t",arr1[i]);
    }
    printf("\nSorted Array:");

    for(i = 0; i<k; i++){
        for(j = i+1; j <k; j++){
            if(arr1[i]<arr1[j]){
                temp=arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=temp;
            }
        }
    }

    for ( i = 0; i < k; i++)
    {
        printf("%d\t",arr1[i]);
    }
    
}