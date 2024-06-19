#include<stdio.h>
int power(int a, int b){
    if(b==0)
    return 1 ;
   return power(a,b-1)*a;

}
int main()
{
    int a;
    printf("Enter the base:");
    scanf("%d",&a);
      
      int b;
    printf("Enter the exp:");
    scanf("%d",&b);
      
   power(a,b);
    
    printf("%d",power(a,b));
    return 0;
}