//Count a total number of duplicate elements in an array

#include<stdio.h>

int main(){
    int j,i,n,arr1[n],arr2[n],k=0;
    printf("Enter the limit of the array ");
    scanf("%d",&n);

    printf("Enter the elements");
    for( i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    for( i=0;i<n;i++){
        arr2[i] = arr1[i];        
    }

    for ( i = 0; i < n; i++)
    {
        for ( j = i+1; j < n; j++)
        {
            if(arr1[i]==arr2[j]){
                k++;
            }
        }
        
    }

    printf("Number of duplicate elements in the array is :%d",k);
    
    return 0;
}