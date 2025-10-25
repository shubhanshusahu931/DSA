#include<iostream>
#include<vector>
#include <algorithm> 
using namespace std;
vector<int> findMajority(vector<int>& arr) {
    int n = arr.size();
    sort(arr.begin(),arr.end());
    int freq = 1,ele = arr[0];
    vector<int> ans;
    
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1])freq++;
        else{
            if(freq>n/3)ans.push_back(arr[i-1]);
            freq = 1;
        }
    }
    if(freq>n/3)ans.push_back(arr[n-1]);
    return ans;
}

int main(){
    vector<int> v = {2,2,1,1,1,2,2};
    vector<int> result = findMajority(v);
    cout<<"majority element is ";
       for(int vals : result){
        cout<<vals<<"\t";
    }
}
