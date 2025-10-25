#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int maxProduct(vector<int> &arr) {
    int curr_pro = 1;
    int n = arr.size();
    int max_pro = INT_MIN;
    for (int i=0;i<n;i++){
    curr_pro *= arr[i];
    max_pro = max(max_pro,curr_pro);
    if(curr_pro == 0){
        curr_pro = 1;
        }
    }
        
    curr_pro = 1;
    for (int i=n-1;i>=0;i--){
    curr_pro *= arr[i];
    max_pro = max(max_pro,curr_pro);
    if(curr_pro == 0){
        curr_pro = 1;
        }
    }
    return max_pro;
}
int main(){
    vector<int> v = {-2, 6, -3, -10, 0, 2};
    cout<<"max product is "<<maxProduct(v);
}