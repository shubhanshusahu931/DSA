#include<iostream>
using namespace std;
int main(){
    int size,i,elmnt,a[100],pos;
    cout <<"enter the size of an array :";
    cin >> size;
    cout << "enter the element of an array :";
    for (i=0;i<size;i++){
        cin >> a[i];
    }
    for (i=0;i<size;i++){
        cout << a[i]<<" ";
    }
    cout <<"\nenter the position at which you want to insert element :";
    cin >> pos;
    cout <<"enter the element that you want to insert : ";
    cin >>elmnt;
    for (i=size;i>=pos;i--){
        a[i+1]=a[i];
    }
    a[pos] = elmnt;
    cout <<"final array is :";
    for (i=0;i<=size;i++){
        cout << a[i]<<" ";
    }
    return 0;
}