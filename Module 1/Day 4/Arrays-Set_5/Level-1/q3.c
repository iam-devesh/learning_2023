#include<stdio.h>
int *getReverse(int *arr,int n){
    printf("Enter the elements in an array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0,j=n-1;i<j;i++,j--){
        int tem=arr[i];
        arr[i]=arr[j];
        arr[j]=tem;
    }
    return arr;
}
int main(){
    int *a;
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    a = getReverse(a,n);
    printf("\nElements of array are :");
    for (int i=0;i<n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}