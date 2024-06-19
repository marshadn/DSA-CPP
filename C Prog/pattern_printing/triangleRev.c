#include<stdio.h>
void main()
{
    int n;
    
    printf("Enter the numnber:");
    scanf("%d",&n);
for (int i = 1; i <=n; i++)
{
    for (int j=n; j >=i; j--)
    {
      printf("*");
    }
    printf("\n");
}

}