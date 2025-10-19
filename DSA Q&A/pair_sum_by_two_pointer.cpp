#include<iostream>
#include<vector>
using namespace std;
vector<int> pairsum(vector<int>& nums,int target) {
    vector<int> ans;
    int n = nums.size();
    int i=0,j=n-1;
    while(i<j){
        int pair_sum = nums[i]+nums[j];
        if(pair_sum>target)j--;
        else if(pair_sum<target)i++;
        else{
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            return ans;
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