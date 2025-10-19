#include <iostream>
using namespace std;
int main (){
    int size;
    int i,a[1000],elm,b;
    bool ispresent = false;
    cout << "enter the size of an array :\t";
    cin >> size;
    cout <<"enter the elements of an array :\n";
    for (i=0;i<size;i++){
        cin >> a[i];
    }
    cout <<"array elemnts are :\t";
     for (i=0;i<size;i++){
        cout <<a[i]<<"  ";        
    }
    cout <<"\nenter the element that you want to search : \t";
    cin >> elm;
    for ( i = 0; i < size; i++)
    { 
        if (elm == a[i]){
            b=i;
            ispresent = true;
            break;
        }   
    }
         
    if(ispresent){
        cout<<"yes element is present at index a:"<<b+1;
    }
     else{
        cout<<"element is not present : ";
    } 
    return 0;
    }




    