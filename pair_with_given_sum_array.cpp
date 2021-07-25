//problem : Given a sorted and rotated array, find if there is a pair with a given sum.
#include<iostream>
using namespace std;


void sum_pair_finder(int *arr,int n,int sum_query) {
    int index[2]={-1,-1};
    bool flag = false;
    cout<<endl;
    for(int i =0;i<n;i++) {
        for(int j =0;j<n;j++) {
            if(arr[i]+arr[j] == sum_query) {
                index[0] = arr[i];
                index[1] = arr[j];
                flag = true;
                break;
            }
        }
        if(flag == true) {
            break;
        }
    }
    
    if (index[0] != -1 && index[1] != -1) {
        cout<<"There is pair of ("<<index[0]<<","<<index[1]<<") "<<"with sum "<<sum_query;
    }
    else {
        cout<<"There is no pair of with sum "<<sum_query;
    }
   
   
}

int main() {
    int arr[6] =  {11, 15, 26, 38, 9, 10};
    int n = 6;
    int sum_query = 45;
    sum_pair_finder(arr,n,sum_query);
    cout<<endl;
    
    return 0;
}