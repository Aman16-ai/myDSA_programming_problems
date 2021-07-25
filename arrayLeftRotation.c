#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void display(int *arr,int n) {
    for(int i =0;i<n;i++) {
        printf("%d ",&arr[i]);
    }
}
void RotateArray(int *arr,int n,int d) {
    int temp = arr[0];
    while(d !=0) {
        for(int i =0;i<n-2;i++) {
            arr[i] = arr[i + 1];    
        }
        arr[n-1] = temp;
    }
}
int main() {
    int *arr,n,d;
    printf("Enter the size of the array");
    scanf("%d",&n);
    arr = (int*)malloc(n*sizeof(int));
    printf("Enter the elements of the array");
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    // printf("Enter the total number of shift");
    // scanf("%d",&d);
    // RotateArray(arr,n,d);
    display(arr,n);
    return 0;
}