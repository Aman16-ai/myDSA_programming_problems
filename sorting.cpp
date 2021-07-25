/*
Given an array of integers, print the array in such a way that the first element is first maximum and second element is first minimum and so on.

Examples :

Input : arr[] = {7, 1, 2, 3, 4, 5, 6}
Output : 7 1 6 2 5 3 4

Input : arr[] = {1, 6, 9, 4, 3, 7, 8, 2}
Output : 9 1 8 2 7 3 6 4


*/

#include<iostream>
#include<conio.h>
using namespace std;

void sort_array(int *arr,int n) {
    int temp;
    for(int i =0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i]<arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    
}
void display(int *arr,int n) {
    for(int i =0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
}
int main() {
    int arr[7] = {7, 1, 2, 3, 4, 5, 6};
    int n = 7;
    cout<<endl<<"Array before sorting:\n";
    display(arr,n);
    sort_array(arr,n);
    cout<<endl<<"Array after sorting:\n";
    display(arr,n);
    cout<<endl<<"Press any key to continue...";
    getch();
    return 0;
}