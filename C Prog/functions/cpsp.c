#include<stdio.h>
void main()
{
int sp,cp;
printf("Enter the selling price:");
scanf("%d",&sp);
printf("Enter the cost price:");
scanf("%d",&cp);
if(sp>cp){
printf("profit");
}
if(sp==cp)
{
    printf("There is no loss or profit");
}
if(cp>sp)
{
    printf("Loss");
}

}