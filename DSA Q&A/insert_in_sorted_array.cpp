#include<iostream>
#include<climits>
#include<algorithm>

using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ele;
    cout<<"enter element to insert : ";
    cin>>ele;
    int i = n-1;
    while(arr[i]>ele){
        arr[i+1] = arr[i];
        i--;
    }
    arr[i+1]=ele;

    for(int i=0;i<n+1;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}