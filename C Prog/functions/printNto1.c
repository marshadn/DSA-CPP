#include<stdio.h>
void print(int n){
    if(n==0)
    return ;
    print(n-1); //Exchange both of these lines
    printf("%d\n",n);//Exchange both of these lines
    
}
int main()
{
    int n;
    printf("Enter the n:");
    scanf("%d",&n);
    print(n);
    return 0;
}