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
    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j < size - 1 - i; j++){
            if (a[j] > a[j + 1]){
                int temp = a[j];
                a[i] = a[j + 1];
                a[j+1] = temp;
            }
        }
    }
    cout << "array elemnts are : ";
    for (i = 0; i < size; i++){
        cout << a[i] << "  ";
    }
}