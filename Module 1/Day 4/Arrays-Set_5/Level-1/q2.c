#include<stdio.h>
int getMax(int arr[],int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if (max<arr[i])
        {
            max=arr[i];
        }
        
    }
    return max;
}
int getMin(int arr[], int n)
{
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<min)
        {
           min=arr[i];
        }
    }
    return min;
}
int main(){
    int n;
    printf("Enter the size of Array:");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the arr[%d] element:", i);
        scanf("%d", &arr[i]);
    }
    printf("Min is %d and Max is %d\n", getMin(arr, n), getMax(arr, n));
}