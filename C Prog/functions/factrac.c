#include<stdio.h>
int fact(int n){
    if(n==1  || n==0)
    return 1 ;
    int fa= n*fact(n-1); 
    return fa;
 
    
}
int main()
{
    int n;
    printf("Enter the n:");
    scanf("%d",&n);
      
    
    fact(n);
    
    printf("%d",fact(n));
    return 0;
}