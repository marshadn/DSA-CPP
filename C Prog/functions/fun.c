#include<stdio.h>
int add(int a,int b){
    int sum=a+b;
    printf("The sum is %d",sum);
    return sum;
}
int main(){
    int a,b;
    printf("Enter a and b:");
    scanf("%d%d",&a,&b);
    add(a,b);
    return 0;
}