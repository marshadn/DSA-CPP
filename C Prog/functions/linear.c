#include<stdio.h>
int main()
{
    int i,search,n,array[100];
   
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter %d integers\n",n);

    for( i = 0; i < n; i++)
    
        scanf("%d",&array[i]);
    printf("Enter the value to find:\n");
    scanf("%d",&search);
   
    for ( i = 0; i <n; i++)
    {
        if (array[i]==search)
        {
        printf("%d is present at location %d",search,i+1);
        break;
        }
        
    }
    if (i==n)
    {
        printf("%d is not present at location %d",search);
    }
    
    
    return 0;
}