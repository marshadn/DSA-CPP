#include<stdio.h>
int main()
{
    int i,n,num=1;
    printf("enter the number:");
    scanf("%d,&n");

    for ( i = 1; i<=n; i++)
    {
        num*=i
    }
     
    
    printf("%d",num);
    
    return 0;
}