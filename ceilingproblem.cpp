#include<iostream>
using namespace std;
int binarySearch(int *arr,int N,int target) {
	int s = 0;
	int e = N-1;
	while(s<=e) {
		int mid = (s+e)/2;
		if(target < arr[mid]) {
			e = mid -1;
		}
		else if(target > arr[mid]) {
			s = mid + 1;
		}
		else {
			return mid;
		}
		return s;
	}

	return -1;
}
int main(int argc, char const *argv[])
{
	int arr[] = {1,3,6,12,54,59};
	int target = 13;
	int N = 6;
	int index = binarySearch(arr,N,target);
	cout<<endl<<"The ceiling of "<<target<<" is "<<arr[index];
	return 0;
}