#include<iostream>
using namespace std;
void swap(int *arr,int i,int j) {
    int temp;
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
void DNF_sort(int *arr,int n) {
    int low = 0;
    int mid = 0;
    int high = n-1;
    while(mid<=high) {
        if(arr[mid] == 0) {
            swap(arr,low,mid);
            low++;
            mid++;
        }
        else if(arr[mid]==1) {
            mid++;
        }
        else if(arr[mid] == 2) {
            swap(arr,mid,high);
            high--;
        }
    }
}
void display(int *arr,int n) {
   for(int i =0;i<n;i++) {
       cout<<arr[i]<<" ";
   } 
}
int main() {
    int arr[] = {0,1,2,2,1,0};
    int n = 6;
    DNF_sort(arr,n);
    display(arr,n);
    return 0;
}