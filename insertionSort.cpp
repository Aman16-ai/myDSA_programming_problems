//Program to implement insertion sort algorithm in cpp.
#include<iostream>
using namespace std;
void display(int *arr,int n) {
    for(int i =0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
}
// 12 45 9 14 7
void insertionSort(int *arr,int n) {
    for(int i = 1;i<n;i++) {
        int current = arr[i];
        int j = i - 1;
        while(current<arr[j] && j>=0) {
            arr[j+1] = arr[j];
            j--;
        }
         arr[j+1] = current;
    }
}
int main() {
    int *arr,n;
    cout<<endl<<"Enter the size of the array";
    cin>>n;
    arr = new int[n];
    cout<<endl<<"Enter the elements in the array";
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    cout<<endl<<"Entered array : ";
    display(arr,n);
    cout<<endl<<"After insertion sort :";
    insertionSort(arr,n);
    display(arr,n);
    return 0;
}