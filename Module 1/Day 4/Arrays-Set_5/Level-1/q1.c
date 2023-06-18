#include<stdio.h>
int getSum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
float getAvg(int arr[],int n){
    float avg=getSum(arr,n)/n;
    return avg;
}
int main(){
    int n;
    printf("Enter the size of Array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the arr[%d] element:",i);
        scanf("%d",&arr[i]);
    }
    printf("Sum is %d and Avg is %f\n",getSum(arr,n),getAvg(arr,n));
}