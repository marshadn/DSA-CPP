#include<stdio.h>
void main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if(x<0)
    x*=-1;
    printf("The absolute value is:%d",x);

}




