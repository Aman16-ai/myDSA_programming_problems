#include<iostream>
using namespace std;
void Rotate_array_by_one(int *arr,int n) {
    int temp = arr[n-1];
    for(int i = n-1;i>=0;i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
}
void display(int *arr,int n) {
    cout<<endl;
    for(int i =0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
}
int main() {
    int arr[5] = {1,2,3,4,5};
    int n = 5;
    cout<<endl<<"Before rotation:";
    display(arr,n);
    Rotate_array_by_one(arr,n);
    cout<<endl<<"After rotation:";
    display(arr,n);
    return 0;
}