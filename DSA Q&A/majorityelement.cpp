#include<iostream>
#include<vector>
#include <algorithm> 
using namespace std;
int majorityElement(vector<int>& nums){
    int n = nums.size();
    int  freq = 1;
    int ans = nums[0];
    sort(nums.begin(),nums.end());
    for(int i=1;i<n;i++){
        if(nums[i] == nums[i-1])freq += 1;
        else {
            freq = 1;
            ans = nums[i];
        }
        if(freq > n/2){
            return ans;
        }
    }
    return ans;
}
int main(){
    vector<int> v = {2,2,1,1,1,2,2};
    cout<<"majority element is "<<majorityElement(v);
}
