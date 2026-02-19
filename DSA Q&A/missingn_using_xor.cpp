#include<iostream>
#include<vector>
#include<climits>
using namespace std;  
int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int xorAll = 0;
    // XOR of 0 to n
    for (int i = 0; i <= n; i++) {
        xorAll ^= i;
    }

    // XOR of array elements
    for (int num : nums) {
        xorAll ^= num;
    }

    return xorAll;
}
int main(){
    vector<int> v = {2, 1, 3, 4, 1, 2, 1, 5, 4,8,6};  
    cout<<"missing no is"<<missingNumber(v);

    return 0;
}