#include<iostream>
#include<vector>
using namespace std;
vector<int> pairsum(vector<int>& nums,int target) {
    vector<int> ans;
    int n = nums.size();
    for(int i=0;i<n;i++){
        for (int j = i; j < n; j++){
            if(nums[i]+nums[j]==target){
                ans.push_back(nums[i]);
                ans.push_back(nums[j]);
                return ans;
            }
        }
    }
    return ans;
}

int main(){
    vector<int> v = {2,7,11,15};
    vector <int> result = pairsum(v,9);
    cout<<"pair sum of ";
    for(int vals : result){
        cout<<vals<<"\t";
    }
    return 0;
}