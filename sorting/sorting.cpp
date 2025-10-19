#include<iostream>
using namespace std;

void bubblesort(int a[1000] ,int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1-i;j++){
            if(a[j]>a[j+1]){
            int temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
            }
        }
    }
}
void selectionsort(int a[1000],int size){
    for(int i=0;i<size-1;i++){
        int min_idx = i;
        for (int j=i;j<size-1;j++){
            if(a[j]<a[min_idx]){
                min_idx = j;
            }
        }
            int temp = a[min_idx];
            a[min_idx] = a[i] ;
            a[i] = temp;     
    }
}
void insertionsort(int a[1000],int size){
    for (int i=0;i<size;i++){
        int prev = i;
        int current = i;
        for(int j=i+1;j<size;j++){
            if(a[prev]<a[j]){
                prev++;
                break;
            }
            else{
                int temp=a[j];
                a[j]=a[prev];
                a[prev]=temp;
                prev++;
                break;
            }
        }
    } 
}
void printarray(int a[1000],int size){
    for(int i=0;i<size;i++){ 
        cout<<a[i]<<"  ";
    }
}
int main(){
    int size,a[1000];
    cout<<"enter the size of an array : ";
    cin>>size;
    for(int i=0;i<size;i++){
    cout<<"enter the "<<i+1<<"th element of an array : ";
    cin>>a[i];
    }
    cout<<"array is : ";
    printarray(a,size);
    bubblesort(a,size);
    cout<<"\nafter applying bubble short array is : ";
    printarray(a,size);
    selectionsort(a,size);
    cout<<"\nafter applying selection short array is : ";
    printarray(a,size);
    insertionsort(a,size);
    cout<<"\nafter applying insertionn short array is : ";
    printarray(a,size);

    return 0;
}