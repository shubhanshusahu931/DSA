#include <iostream>
using namespace std;
int main(){
    int size;
    int i, a[1000],j;
    cout << "enter the size of an array : ";
    cin >> size;
    cout << "enter the elements of an array :\n";
    for (i = 0; i < size; i++){
        cin >> a[i];
    }
    cout << "array elemnts are : ";
    for (i = 0; i < size; i++){
        cout << a[i] << "  ";
    }
    for(i=0;i<size-1;i++){
        int  k = a[i];
        j=i-1;
        while(j>=0 && a[j]>k){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=k;
    }
    cout << "final array elemnts are : ";
    for (i = 0; i < size; i++){
        cout << a[i] << "  ";
    }

}