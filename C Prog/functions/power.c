#include<stdio.h>
#include<math.h>
int main(){ 
    int a,b;
    printf("Enter the number:");
    scanf("%d",&a);
     printf("Enter the exponent:");
    scanf("%d",&b);
    int power=pow(a,b);
    printf("The answer is:%d",power);
    return 0;
}