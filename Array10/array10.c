// Write a program in C to insert New value in the array at particular position.

void main(){
    int i,pos,value,limit,a[100];

    printf("Enter the limit");
    scanf("%d",&limit);
    printf("Enter the elements");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }

    printf("enter the position");
    scanf("%d",&pos);

    printf("Enter the value to be inserted");
    scanf("%d",&value);

    for ( i = limit-1; i>=pos; i--)
    {
        a[i+1]=a[i];
        printf("%d\t%d\n",a[i],i);
    }
    a[pos] =value;

    printf("Final array :");
    for(i=0;i<=limit;i++){
        printf("%d\t",a[i]);
    }
}