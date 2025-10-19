#include<iostream>
#include<vector>
using namespace std;
int maxSubArray(vector<int>& nums) {
    int currsum =0;
    int n = nums.size();
    int max_sum = INT_MIN;
    for(int val : nums){
        currsum += val;
        max_sum = max(currsum,max_sum);
        if(currsum < 0){
            currsum = 0;
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