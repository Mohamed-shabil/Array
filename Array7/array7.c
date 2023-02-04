// Write a program in C to print all unique elements in an array
#include<stdio.h>

int main(){
    int i,j,arr[100],n;

    printf("Enter the limit of the array");
    scanf("%d",&n);

    printf("Enter the elements");
    for ( i = 0; i <n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++){
        int c = 0;
        for(j=0;j<n;j++){
            if (i!=j)
            {
                 if(arr[i] == arr[j]){
                    c++;
                 } 
            }
        }

        if(c==0){
            printf("%d",arr[i]);
        }
    }

    
}