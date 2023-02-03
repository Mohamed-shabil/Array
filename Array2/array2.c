// Check Wheather any of the digit in a Number appears more than one. 
#include<stdio.h>
int main(){
    int seen[10] ={0};
    int N,rem;
    printf("Enter a Number");
    scanf("%d",&N);

    while(N>0){
        rem = N%10; // by doing this rem get the last digit from the Input eg : 123%10 = 3
        if(seen[rem] == 1){
            break;
        }
        seen[rem] = 1;
        N=N/10; //here it eliminate the last number from the input and store that on N eg : 123/10 = 12  
    }

    if(N>0){
        printf("YES"); 
        // after all the iteration if the value of N > 0 ,then its clear that the break statement is triggered that means some number is get repeated 
    }
    else{
        printf("NO");
    }

    return 0;
}