#include<iostream>
#include<vector>
using namespace std;
int maxSubArray(vector<int>& nums) {
    
    int n = nums.size();
    int max_sum = INT_MIN;
    for(int i=0;i<n;i++){
        int currsum =0;
        for(int j=i+1;j<n;j++){
            currsum += nums[j];
            max_sum = max(currsum,max_sum);
        }
    }
    return max_sum;
}

int main(){
    // int n;
    // cout << "Enter the number of elements: ";
    // cin >> n;

    vector<int> v = {-2, 1, -3, 4, -1, 2, 1, -5, 4};  

    // cout << "Enter " << n << " elements: ";
    // for (int i = 0; i < n; i++) {
    //     cin >> v[i];   
    // }

    // cout << "You entered: ";
    // for (int i = 0; i < n; i++) {
    //     cout << v[i] << " ";   
    // }
   cout<<"max sub array sum is "<<maxSubArray(v);
}