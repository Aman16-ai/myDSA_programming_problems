#include<iostream>
#include<vector>
using namespace std;

//leetcode problem 
int binearySearch(vector<int> &nums,int target) {
    int start = 0;
    int end = nums.size() - 1;
    int mid;
    while(start <= end) {
        mid = (start + end)/2;
        if(target > nums[mid]) {
            start = mid + 1;
        }
        else if(target < nums[mid]) {
            end = mid - 1;
        }
        else {
            return mid;
        }
    }
    return start;
}
int main() {
    vector<int> nums = {1,3,5,6};
    int target = 2;
    cout<<endl<<target<<" found at "<<binearySearch(nums,target);
    return 0;
}