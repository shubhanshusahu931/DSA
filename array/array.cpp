    // traversal_in_array();
    // search_element_in_array();
    // insert_an_element_in_array_at_end();
    // insert_element_in_array_at_first();
    // insert_element_in_array_at_pos();
    // merg_two_array();
    // merg_two_array_using_third_array();
    // delete_element_from_array();
    // reverse_of_an_array();


#include <iostream>
using namespace std;
void traversal_in_array() {
    int a[100];
    int size,i;
    cout<<"enter the size of an array :"<<endl;
    cin>>size;
    cout<<"enter the elemnts of array :"<<endl;
    for (i=0;i<size;i++)
    {
    cin >> a[i];
    }
    for (i=0;i<size;i++)
    {
    cout<<a[i];
    }
}

void search_element_in_array() {
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
}

void insert_an_element_in_array_at_end() { 
    int size,i,elmnt,a[100];
    cout <<"enter the size of an array :";
    cin >> size;
    cout << "\nenter the element of an array :";
    for (i=0;i<size;i++){
        cin >> a[i];
    }
    for (i=0;i<size;i++){
        cout << a[i];
    }
    cout <<"\nenter a number that you want to insert in the end of array : ";
    cin >> elmnt;
    a[size] = elmnt;
    cout << "final array is :";
    for ( i = 0; i <= size; i++)
    {
        cout << a[i];
    }   
}

void insert_element_in_array_at_first(){
    int size,i,elmnt,a[100];
    cout <<"enter the size of an array :";
    cin >> size;
    cout << "\nenter the element of an array :";
    for (i=0;i<size;i++){
        cin >> a[i];
    }
    for (i=0;i<size;i++){
        cout << a[i];
    }
    cout <<"\nenter the element that you want to insert : ";
    cin >>elmnt;
    for(i=size;i>=0;i--){
        a[i+1]=a[i];
    }
    a[0]= elmnt;
    cout<<"final array is : \t";
    for(i=0;i<=size;i++){
        cout<<a[i]<<" ";
    }
}
    
    void insert_element_in_array_at_pos(){
    int size,i,elmnt,a[100],pos;
    cout <<"enter the size of an array :";
    cin >> size;
    cout << "\nenter the element of an array :";
    for (i=0;i<size;i++){
        cin >> a[i];
    }
    for (i=0;i<size;i++){
        cout << a[i];
    }
    cout <<"enter the position at which you want to insert element :";
    cin >> pos;
    cout <<"enter the element that you want to insert : ";
    cin >>elmnt;
    for (i=size;i>=pos;i--){
        a[i+1]=a[i];
    }
    a[pos] = elmnt;
    cout <<"final array is :";
    for (i=0;i<=size;i++){
        cout << a[i];
    }
}

    void merg_two_array(){
    int size1,size2,i,array1[2000],array2[2000];
    cout <<"enter the size of an first array :";
    cin >> size1;
    cout << "\nenter the element of 1st array :";
    for (i=0;i<size1;i++){
        cin >> array1[i];
    }
    for (i=0;i<size1;i++){
        cout << array1[i];
    }
    cout <<"enter the size of 2nd array :";
    cin >> size2;
    cout << "\nenter the element of an array :";
    for (i=0;i<size2;i++){
        cin >> array2[i];
    }
    for (i=0;i<size2;i++){
        cout << array2[i];
    }
    for (i=0;i<=size1+size2;i++){
        array1[size1+i] = array2[i];
    }
    cout << "after merg is :";
    for (i=0;i<size1+size2;i++){
        cout << array1[i];

    }
}

    void merg_two_array_using_third_array(){
    int size1,size2,i,array1[2000],array2[2000],array3[4000];
    cout <<"enter the size of an first array :";
    cin >> size1;
    cout << "\nenter the element of 1st array :";
    for (i=0;i<size1;i++){
        cin >> array1[i];
    }
    for (i=0;i<size1;i++){
        cout << array1[i]<<" ";
    }
    cout <<"enter the size of 2nd array :";
    cin >> size2;
    cout << "\nenter the element of an array :";
    for (i=0;i<size2;i++){
        cin >> array2[i];
    }
    for (i=0;i<size2;i++){
        cout << array2[i]<<" ";
    }
    for (i=0;i<(size1+size2);i++){
        if(i<size1){
            array3[i]=array1[i];
        }
        else{
            array3[i]=array2[i-size1];
        }  
    }
    cout << "\nafter merg is :";
    for (i=0;i<(size1+size2);i++){
        cout << array3[i]<<" ";
    }
}

    void delete_element_from_array() {
    int size,i,a[100],pos;
    cout <<"enter the size of an  array :";
    cin >> size;
    cout << "\nenter the element of an array :";
    for (i=0;i<size;i++){
        cin >> a[i];
    }
    for (i=0;i<size;i++){
        cout << a[i]<< " ";
    }
    cout<<"\nenter the position at which you want delete an element : \t";
    cin>> pos;
    for ( i = pos; i <size; i++){
        a[i]=a[i+1];        
    }
    cout<<"now final array is : \t";
    for (i=0;i<size-1;i++){
        cout << a[i]<< " ";
    }
} 

    void reverse_of_an_array() {
        int size,i,a[100],temp;
        cout<<"enter the size of an array :";
        cin>>size;
        cout<<"enter the elements of an array : \t";
        for ( i = 0; i < size; i++) {
            cin>> a[i];
        }
        for(i=0;i<size;i++){
            cout<<a[i]<<" ";
        }
        for ( i = 0; i <(size/2); i++)
        {
            temp =  a[i];
            a[i] = a[size-1-i];
            a[size-1-i]=temp;
        }
        cout<<"\nnow final array is:\t";
        for ( i = 0; i < size; i++){
            cout<<a[i]<<" ";
        }
    }

int main(){
    //  traversal_in_array();
    // search_element_in_array();
    // insert_an_element_in_array_at_end();
    // insert_element_in_array_at_first();
    insert_element_in_array_at_pos();
    // merg_two_array();
    // merg_two_array_using_third_array();
    // delete_element_from_array();
    // reverse_of_an_array();

}