#include <iostream>
using namespace std;
int main (){
    int size;
    int i,a[1000],elm,start=0,mid;
    int first = -1;
    cout << "enter the size of an array : ";
    cin >> size;
    int end=size-1;
    cout <<"enter the elements of an array :\n";
    for (i=0;i<size;i++){
        cin >> a[i];
    }
    cout <<"array elemnts are : ";
     for (i=0;i<size;i++){
        cout <<a[i]<<"  ";        
    }
    cout <<"\nenter the element that you want to search : ";
    cin >> elm;
    while(start<=end){
        mid=start+(end-start)/2;
        if(a[mid]==elm){
            first = mid;
            end=mid-1;
        }
        else if(a[mid]<elm){
            start=mid+1;
        }
        else{
            end=mid-1;

        }
    }
    if(first!=-1){
        cout<<"yes element is present at index : "<<first;
    }
     else{
        cout<<"element is not present : ";
    } 
    return 0;
}