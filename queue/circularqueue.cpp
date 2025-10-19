// isEmpty();
// isFull();
// peek();
// enqueue();
// dequeue();

#include<iostream>
using namespace std;


int front=-1,rear=-1,Q[100],a;
#define SIZE a
bool isEmpty(){
    if(front==-1){
        return true;
    }
    else{
        return false;
    }
}
bool isFull(){
    if(front==(rear+1)%SIZE){
        return true;
    }
    else{
        return false;
    }
}
int peek(){
    if(isEmpty()){
        cout<<"queue is empty ";
    }
    else{
        return Q[front];
    }
}
void enqueue(int x){
    if(isFull()){
        cout<<"queue is full ";
    }
    else{
        if(front==-1)front++;
        rear=(rear+1)%SIZE;
        Q[rear]=x;
    }
}
int dequeue(){
    if(isEmpty()){
        cout<<"queue is empty";
    }
    else{int x;
        x=Q[front];
        front=(front+1)%SIZE;
        return x;
    }
}
int main(){
    if(isEmpty()){
        cout<<"queue is empty "<<endl;
    }
    cout<<"enter the no of element you want to inseart in queue : ";
    cin>>a;
    for(int i=0;i<SIZE;i++){
        int a;
        cout<<"enter the value of "<<i<<" th element of queue : ";
        cin>>a;
    enqueue(a);
    }
    cout<<"peek element is : "<<peek()<<endl;
    int i=front;
    cout<<"after applying enqueue operation the queue is : ";
    while (i!=SIZE){
        cout<<Q[i]<<" ";
        i++;
    }
    if(isFull()){
        cout<<"\nqueue is full"<<endl;
    }
    int d;
    cout<<"enter the no of element you want to delete from queue : ";
    cin>>d;
    for(int i=0;i<d;i++){
    cout<<"the deleted element is : "<<dequeue()<<endl;
    }
    cout<<"after applying dequeue operation the queue is : ";
    int j=front;
    while (j!=SIZE){
        cout<<Q[j]<<" ";
        j++;
    }
        if(isFull()){
        cout<<"\nqueue is full"<<endl;
    }
        if(isEmpty()){
        cout<<"\nqueue is empty "<<endl;
    }
    cout<<"\nafter add new element : \n";
    enqueue(10);
    j=front;
        while (j!=rear){
        cout<<Q[j]<<" ";
        j=(j+1)%SIZE;
    }

    return 0;
}
