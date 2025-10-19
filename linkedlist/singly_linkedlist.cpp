#include<iostream>
#include<stdio.h>
using namespace std;
struct node{
    int value;
    struct node *next;

};
struct  node *head=NULL,*last,*ptr,*ptr1;

void create_singly_linkedlist(){
        int size;
    cout<<"enter the size of linkedlist ";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        if (head==NULL){
            ptr=(struct node*)malloc(sizeof(struct node));
            cout<<"enter the value of "<< i<<"th element ";
            cin>>ptr->value;
            ptr->next = NULL;
            head = ptr;
            last = head;        
        }
        
        else{
            ptr=(struct node*)malloc(sizeof(struct node));
            cout<<"enter the value of "<< i<<"th element ";
            cin>>ptr->value;
            ptr->next = NULL;
            last->next = ptr;
            last = ptr;
        }   
    }
}

void traverse_singly_linkedlist(){
    ptr1 = head;
    while (ptr1!=NULL)
    {

        cout<<ptr1->value<<"-->";
        cout<<ptr1->next<<"  ";
        ptr1=ptr1->next;
    }
}

void insert_at_first(){
    create_singly_linkedlist();
    ptr=(struct node*)malloc(sizeof(ptr));
    cout<<"enter the value of new node ";
    cin>>ptr->value;
    ptr->next=NULL;
    ptr->next = head;
    head = ptr;
    traverse_singly_linkedlist();
}

void insert_at_last(){
    create_singly_linkedlist();
    ptr = (struct  node *)malloc(sizeof(ptr));
    cout<< "enter the value of new node";
    cin >> ptr->value;
    ptr->next = NULL;
    last->next = ptr;
    last = ptr;
    traverse_singly_linkedlist();
}


void insert_at_position(){
    create_singly_linkedlist();
    int position;
    ptr = (struct node *)malloc(sizeof(ptr));
    cout<<"enter the value of new node ";
    cin >> ptr->value;
    ptr->next = NULL;
    cout<< "enter the position on which you want to insert a new node :";
    cin>> position;
    ptr1 = head;
        for(int i=1;i<position-1;i++){
            ptr1 = ptr1->next ;
        }
    ptr->next = ptr1->next;
    ptr1->next = ptr;
    traverse_singly_linkedlist();        
}

int main(){
    // create_singly_linkedlist();
    // traverse_singly_linkedlist();
    // insert_at_first();
    // insert_at_last();
    // insert_at_position();

 
}





