#include<stdio.h>
int main(){
    int n,product=1;
    printf("Enter the number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        product*=i;
    }
    printf("The product of first %d natural numbers is:%d",n,product);    
return 0;
}