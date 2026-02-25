#include<iostream>
#include<vector>
#include<climits>

using namespace std;

void missing(vector<int>& arr){
    int diff = arr[0]- 0;
    int n = arr.size();
    for(int i=0;i<n;i++){
        while(arr[i]-i != diff){
            cout<<"missing elements is :"<<i+diff<<endl;
            diff++;
        }
    }
}

int main(){
    vector<int> v = {1,2,3,5,6,8,9,11,12,13,15};
    missing(v);
    return 0;
}