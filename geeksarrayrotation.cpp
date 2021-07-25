#include<iostream>
using namespace std;
void ArrayRotate(int *arr,int N,int D);
void Rotater(int *arr, int N);
void display(int *arr,int N);
void ArrayRotate(int *arr,int N,int D) {
    for(int i =0;i<D;i++) {
        Rotater(arr,N);
    }
}
void Rotater(int *arr,int N) {
    int temp = arr[0];
    for(int i =0;i<N;i++) {
        arr[i] = arr[i + 1];
    }
    arr[N - 1]= temp;
    display(arr,N);
}
void display(int *arr,int N) {
    for(int i =0;i<N;i++) {
        cout<<arr[i]<<" ";
    }
}
int main() {
    int T;
    int *arr;
    int N,D;
    cout<<endl<<"Enter the total number of test cases : ";
    cin>>T;
    while(T!=0) {
        cout<<endl<<"Enter the total number of elements of the array:";
        cin>>N;
        cout<<endl<<"Enter the number of rotations";
        cin>>D;
        cout<<endl<<"Enter the elements in the array";
        arr = new int[N];
        for(int i =0;i<N;i++) {
            cin>>arr[i];
        }
        cout<<endl<<"Before rotation:";
        display(arr,N);
        cout<<endl<<"After rotation :";
        ArrayRotate(arr,N,D);
        T--;
    }
}