#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int main() {
    unordered_map<int,int> mp;
    vector<int> nums{0,0,1,1,1,2,2,3,3,4};
    vector<int> temp;
    for(int i =0;i<nums.size();i++) {
        if(mp[nums[i]]>1) {
            temp.push_back(nums[i]);
        }
        mp[nums[i]]++;
    }
    // for(auto &m:mp) {
    //     cout<<endl<<m.first<<" "<<m.second;
    // }
    for(int i =0;i<temp.size();i++) {
        cout<<endl<<temp[i];
    }
    return 0;
}