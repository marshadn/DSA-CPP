#include<stdio.h>
int main()
{
    int l,b,a,p;
    printf("\nEnter the length:");
    scanf("%d",&l);
    printf("\nEnter the breadth:");
    scanf("%d",&b);
    a=l*b;
    p=2*(l+b);
    printf("\narea is:%d",a);
    
    printf("\nperimeter is %d",p);
    
    if(a>p)
    printf("\nArea is greater than perimeter");
    else
    printf("\nArea is less than Perimeter");

    return 0;
}