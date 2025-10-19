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
    if(rear==-1){
        return true;
    }    
    // if(front!=(rear++)%size){
    //     return true;
    // }
    else{
        return false;
    }
}

bool isFull(){
    if(rear==SIZE-1){
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
        // rear=(rear++)%size      cq
        // Q[rear]=x;
        // scanf("%d",&Q[rear]);    cq
        // scanf("%d",&Q[++rear]);
        Q[++rear]=x;
    }
}
int dequeue(){
    if(isEmpty()){
        cout<<"queue is empty";
    }
    else{int x;
        x=Q[front];
        // front=(front++)%size     cq
        front++;
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
    while (front!=SIZE){
        cout<<Q[front]<<" ";
        front++;
    }
    // int size;
    // scanf("%d",&size);
    // isEmpty();
    // isFull();
    // peek();
    // enqueue();
    // dequeue();
    return 0;
}