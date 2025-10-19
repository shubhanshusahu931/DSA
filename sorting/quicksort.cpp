#include<iostream>
using namespace std;
int main(){
    int a[100],size;
    cout<<"enter the size of array : ";
    cin>>size; 
    cout<<"enter the elements of an array : ";
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<"the array  is : ";
    for(int i=0;i<size;i++){
        cout<<a[i]<<"  ";
    }
    int pivot=0;
    int i=0,j=size;
    while(i>=j){
        if(a[i]>a[pivot]){
            i++;
        }
        else if(a[j]<a[pivot]){
            j++;
        }
        int temp=a[j];
        a[j]=a[i];
        a[i]=a[pivot];
        a[pivot]=temp;
    }

        cout<<"the array  is : ";
    for(int i=0;i<size;i++){
        cout<<a[i]<<"  ";
    }
    return 0;
}
