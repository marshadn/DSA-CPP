#include<stdio.h>
int main(){
    int n,arr[10];
    printf("Enter the size of array:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Enter number %d:",i+1);
        scanf("%d",&arr[i]);
    }

    for(int i=1;i<n;i++){
    if(arr[0]<arr[i]){
        arr[0]=arr[i];      
}
    }
    printf("The biggest element in the array is:%d",arr[0]);
    return 0;
}