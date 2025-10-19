#include <iostream>
using namespace std;
int main(){
    int size;
    int i, a[1000];
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
    for( i=0;i<size-1;i++){
        int minidx = i;
        for(int j=i+1;j<size;j++){
            if(a[minidx]>a[j]){
                minidx=j;
            }
        }
        swap(a[i],a[minidx]);
    }
    cout << " final array elemnts are : ";
    for (i = 0; i<size; i++){
        cout << a[i] << "  ";
    }
}