    // isEmpty();
    // peek();
    // push();
    // pop();

#include<iostream>
using namespace std;
int size;
struct node {
    int value;
    node *next;
};
struct node *ptr,*ptr1;
struct node *top=NULL;

bool isEmpty(){
    if(top==NULL){
        return true;
    }
    else{
        return false;
    }
}
int peek(){
    if(isEmpty()){
        cout<<"stack is underflow "<<endl;
    }
    else{int x;
        x=top->value;
        return x;
    }
}
void push(int x){
    node *ptr=new node();
    if(top==NULL){
        ptr->value=x;
        ptr->next=NULL;
        top=ptr;
    }
    else{
        ptr->value=x;
        ptr->next=top;
        top=ptr;
    }
}
int pop(){
    if(isEmpty()){
        cout<<"stack is empty "<<endl;
    }
    else{ 
        int x;
        x=top->value;
        ptr=top;
        top=top->next;
        free(ptr);
    return x;
    }
}
int main (){
    cout<<"enter the size of stack : ";
    cin>>size;
    for(int i=0;i<size;i++){
        cout << "enter the element that you want to insert at "<<i+1<<" position : ";
        int a;
        cin >> a;
        push(a);
    }
        cout << "after applying push operation :";
        ptr1 = top;
       while (ptr1!=NULL){
        cout <<ptr1->value<< endl;
        ptr1=ptr1->next;
    }

    //isempty opertion
    if(isEmpty()){
        cout<<"stack is underflow "<<endl;
    }
    else{
        cout << "peek element is :" << peek() << endl;
        cout << "deleted element is :" << pop() << endl;
    }
    cout << "after applying pop operation is "<< endl;
    while (top!=NULL){
        cout<<top->value<< endl;
        top=top->next;
    }
    // cout<<"enter the size of stack : ";
    // scanf("%d",&size);
    // isEmpty();
    // peek();
    // push();
    // pop();
    
    return 0;
}