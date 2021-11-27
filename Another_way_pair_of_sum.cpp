/* Problem statement : Given an array A[] and a number x, check for pair in A[] with sum as x


Examples:

Input: arr[] = {0, -1, 2, -3, 1}
        sum = -2
Output: -3, 1
If we calculate the sum of the output,
1 + (-3) = -2

Input: arr[] = {1, -2, 1, 0, 5}
       sum = 0
Output: -1
No valid pair exists.

*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int> pair;
        int low = 0;
        int high = nums.size() - 1;
        while(low < high) {
            if(nums[low] + nums[high] < target) {
                low++;
            }
            else if(nums[low] + nums[high] > target) {
                high--;
            }
            else {
                pair.push_back(low);
                pair.push_back(high);
                break;
            }
        }
        return pair;
}
vector<int> TowSumHash(vector<int>&nums,int target) {
    unordered_map <int,int>mp;
    for(int i =0;i<nums.size();i++) {
        if(mp.find(target - nums[i]) != mp.end()) {
            vector<int> result;
            result.push_back(i);
            result.push_back(mp[target - nums[i]]);
            return result;
        } 
        mp[nums[i]] = i;
    }
}
int main() {
    vector<int> arr{3,2,4};
    int target =  6;
    vector<int> pair = TowSumHash(arr,target);
    for(int i =0;i<pair.size();i++) {
     cout<<endl<<pair[i];   
    }
    return 0;
}