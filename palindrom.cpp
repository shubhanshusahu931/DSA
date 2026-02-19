#include<iostream>

using namespace std;

bool ispalindrom(int x){
    if(x<0 || (x % 10 == 0 && x != 0))return false;
    int rev = 0;
    while(x>rev){
        int digit = x % 10;
        rev = rev*10 + digit;
        x = x/10;
        } 
    if(x==rev || x == rev / 10){
        return true; 
    } 
}
int main(){
    int x ;
    cout<<"enter any number : ";
    cin>> x;
    if(ispalindrom(x)){
        cout<<x<<" is palindome number ";
    }
    else{
        cout<<x<<" is not a palindrome number ";
    }
    return 0;
}