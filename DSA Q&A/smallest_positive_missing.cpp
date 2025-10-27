#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int missingNumber(vector<int> &arr) {    
    int n = arr.size();
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        if(arr[i]< 0){
            continue;
        }
        else{
            if(arr[i+1] == arr[i]){
                continue;
            }
            else if(arr[i+1] == arr[i]+1){
                continue;
            }
            else{
                return arr[i]+1;
            }
        }
    }
    return arr[0];
}

int main(){
    // vector<int> v = {2, -3, 4, 1, 1, 7};
    // vector<int> v = {5, 3, 2, 5, 1};
    vector<int> v = {-8, 0, -1, -4, -3};
    cout<<"smallest missing positive no is "<<missingNumber(v);
}
