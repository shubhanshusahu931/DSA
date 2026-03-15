#include<iostream>
#include<climits>
#include<algorithm>
#include<vector>

using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    int m = nums1.size();
    int n = nums2.size();
    int i = 0;
    int j = 0;
    vector<int> c;
    while(i<m && j<n){
        if(nums1[i]==nums2[j]){
            c.push_back(nums1[i++]);
            j++;
        }
    }
    return c;
}

int main(){
    vector<int> nums1 ={4,9,5};
    vector<int> nums2 ={9,4,9,8,4};
    vector<int> v = intersection(nums1,nums2);
    for(int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}