#include <iostream>
using namespace std;
void isEven(int n) {
    // code here
    if(n%2==0){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }
}
int main(){
    int n;
    cout<<"enter ny number : ";
    cin>>n;
    isEven(n);
}