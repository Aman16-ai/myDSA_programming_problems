//Program to rotate an array

#include<iostream>
#define RIGHT 1
#define LEFT  2
using namespace std;


//**********************This is the fistway to rotate an array.
// void RotateArray(int *arr,int dir,int n,int shift_count) {
//     int temp,i;
//     if(dir==RIGHT) {
//         while(shift_count) {
//             temp = arr[n-1];
//             for(i = n-1;i>=1;i--) {
//                 arr[i] = arr[i-1];
//             }
//             arr[0] = temp;
//             shift_count--;
//         }
//     }
//     else {
//         while(shift_count) {
//             temp = arr[0];
//             for(i=0;i<=n-2;i++) {
//                 arr[i] = arr[i + 1];
//             }
//             arr[n-1] = temp;
//             shift_count--;
//         }

//     }
// }
// void displayArray(int *arr,int n) {
//     cout<<endl;
//     for(int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
// }
// int main() {
//    int arr[7] = {1,2,3,4,5,6,7};
//    int n=7;
//    int dir = LEFT;
//    int shift_count=2;
//    displayArray(arr,n);
//    RotateArray(arr,dir,n,shift_count);
//    displayArray(arr,n);
//    return 0;
// }


//************ Rotating the array one by one**************************


void ArrayRotater(int *arr,int n);
void displayArray(int *arr,int n);
void RotateArray(int *arr,int n,int d) {
    for(int i =0;i<d;i++) {
        ArrayRotater(arr,n);
    }
}
void ArrayRotater(int *arr,int n) {
    int temp = arr[0];
    for(int i = 0;i<=n-1;i++) {
        arr[i] = arr[i + 1];
    }
    arr[n-1] = temp;
    //displayArray(arr,n);

}
void displayArray(int *arr,int n) {
    cout<<endl;
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {
    int arr[7] = {1,2,3,4,5,6,7};
    int d = 2;
    int n = 7;
    cout<<endl<<"Before rotation: ";
    displayArray(arr,n);
    RotateArray(arr,n,d);
    cout<<endl<<"AFter rotation: ";
    displayArray(arr,n);
    return 0;
}