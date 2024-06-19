#include<stdio.h>
void main()
{
    int i,j,n,temp;
    int arr[5];
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the elements  of array:");
    scanf("%d",&arr[5]);
 for( i = 0; i < n-1; i++)
 {
    for(j=0;j<n-1-i;j++)
    {
        if (arr[j]>arr[j+1])
        {
           temp=arr[j];
           arr[j]=arr[j+1];
           arr[j+1]=temp;
        }
        
    } 
    printf("The sorted array is %d",arr[j+1]);
 
 }


}