#include<iostream>
using namespace std;
int Majority_element(int *arr,int n){
    int count = 0;
    int index;
    for(int i =0;i<n;i++) {
        for(int j = 0;j<n;j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
            if(count>n/2) {
                index = i;
                break;
            }
            if(count == n/2) {
                index = -1;
                break;
            }
            
        }
    }
    return index;
}
void display(int *arr,int n) {
    cout<<endl;
    for(int i =0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
}
int main() {

    int arr[8] = {3, 3, 4, 2, 4, 4, 2, 4};
    int n = 8;
    int index = Majority_element(arr,n);
    display(arr,n);
    if(index>=0) {
        cout<<endl<<"Majority element in the array is: "<<arr[index];
    }
    else {
        cout<<endl<<"No majority element:";
    }
    return 0;
}