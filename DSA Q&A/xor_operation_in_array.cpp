#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int xorOperation(int n, int start) {
    int xornums = 0;
    for(int i=0;i<n;i++){
        xornums ^= start + 2*i;
    }   
    return xornums;    
}

int main(){
    int n, start;
    cout<<"Enter n and start: ";
    cin>>n>>start;
    int xornums = xorOperation(n, start);
    cout<<"\nXOR of array is "<<xornums;
}