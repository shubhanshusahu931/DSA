#include<iostream>
#include<vector>
#include<climits>

using namespace std;
vector<int> arrange(vector<int>& arr){
    int n = arr.size();
    int i=0,j=n-1;
    while(j>i){
        while(arr[i]<0){
            i++;
        }
        while(arr[j]>=0){
            j--;
        }
        swap(arr[j],arr[i]);
        
    }
    return arr;
}

int main(){
    vector<int> v = {1,6,-4,8,-2,-7,9,5,3,12,-22};
    vector<int> arr = arrange(v);
    cout<<"arranged array is :";
    for(int val:arr){
        cout<<val<<"  ";
    }
    return 0;
}