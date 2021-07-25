#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int arr[50],n,i;
    cout<<endl<<"Enter the size of the array:";
    cin>>n;
    cout<<endl<<"Enter the elements in the array:";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl<<"Enter the position:";
    int pos;
    cin>>pos;
    cout<<endl<<"Enter the element:";
    int ele;
    cin>>ele;
    if(pos<0 || pos > n-1){
        cout<<endl<<"Invalid position:";
    }
    else{
        for(i=n-1;i<pos-1;i--){
            arr[i+1]=arr[i];
        }
        arr[pos-1]=ele;
    }
    for(i=0;i<n;i++){
        cout<<endl<<arr[i];
    }
    return 0;
}