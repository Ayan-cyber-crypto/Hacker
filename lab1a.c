#include<stdio.h>
int main(){
    int n;
    printf("enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the %d values in the array",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("the stored values of the array are:");
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}