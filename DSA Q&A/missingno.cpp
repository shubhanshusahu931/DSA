#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int missingNumber(vector<int>& nums) {
    int n = nums.size();
    
    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;

    for (int num : nums) {
        actualSum += num;
    }

    return expectedSum - actualSum;
}


int main(){
    vector<int> v = {3,0,1};  
    cout<<"missing no is : "<<missingNumber(v);

    return 0;
}