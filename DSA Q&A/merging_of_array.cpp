#include<iostream>
#include<climits>
#include<algorithm>

using namespace std;

int main(){
    int arr1[] = {2,4,6,7,9};
    int arr2[] = {1,3,5,8,10,11};
    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);
    int c[m+n];

    int i=0;
    int j=0;
    int k=0;
    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            c[k++] = arr1[i++];
        }
        else{
            c[k++]= arr2[j++];
        }
    }
        while(i<m){
            c[k++] = arr1[i++];
        }
        while(j<n){
            c[k++] = arr2[j++];
        }

    for(int idx=0;idx<k;idx++){
        cout<<c[idx];
    }
    return 0;
}