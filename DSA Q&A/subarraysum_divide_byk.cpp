#include<iostream>
#include<climits>
#include<vector>

using namespace std;
int subarraysDivByK(vector<int>& nums, int k) {
    int count = 0;
    int n = nums.size();
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
            sum += nums[j];
            if((sum%k) == 0){
                cout<<"sum is : "<<sum<<endl;
                count += 1;
            }
        } 
        cout<<endl;
    }
    return count;
}

int main(){
    vector<int> v = {4,5,0,-2,-3,1};
    int k = 5;
    cout<<"total count is : "<<subarraysDivByK(v,k);
}