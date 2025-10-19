  #include<iostream>
  using namespace std;
    //  DOUBLY LINKED LIST
    struct node {
        int value;
        node *next;
        node *prev;
    };
    struct node *head,*last,*ptr,*ptr1,*ptr2,*ptr3,*ptr4,*ptr5;
    void create_and_traverse_doubly_linked_list(){
        int size;
        cout<<"enter the size of doubly linked list : ";
        cin>>size;
        head =(struct node*)malloc(sizeof(struct node));
        cout<<"enter the value of first linked list : ";
        cin>>head->value;
        head->next=NULL;
        head->prev=NULL;
        last=head;
        for(int i=1;i<size;i++){
            ptr = (struct node*)malloc(sizeof(struct node));
            cout<<"enter the value of "<<i+1<<" linked list : ";
            cin>>ptr->value;
            ptr->prev=NULL;
            ptr->prev=last;
            ptr->next=NULL;
            last->next=ptr;
            last=ptr;
        }
        ptr1=head;
        while (ptr1!=NULL){
            cout<<ptr1->prev<<"    ";
            cout<<ptr1->value<<"    ";
            cout<<ptr1->next<<"    ";
            ptr1 =ptr1->next;
        }       
    }

    void inseart_element_in_doubly_linked_list(){
        int size;
        cout<<"enter the size of doubly linked list : ";
        cin>>size;
        head = (struct node*)malloc(sizeof(struct node));
        cout<<"enter the first value of doubly linked list : ";
        cin>>head->value;
        head->next=NULL;
        head->prev=NULL;
        last=head;
        for(int i=1;i<size;i++){
            ptr=(struct node*)malloc(sizeof(struct node));
            cout<<"enter the "<<i+1<<" th value of doubly linked list : ";
            cin>>ptr->value;
            ptr->prev=NULL;
            ptr->prev=last;
            ptr->next=NULL;
            last->next=ptr;
            last=ptr;
        }
        ptr1=head;
        while(ptr1!=NULL){
            cout<<ptr1->prev<<"  ";
            cout<<ptr1->value<<"  ";
            cout<<ptr1->next<<"\n";
            ptr1=ptr1->next;
        }
        int pos;
        cout<<"enter the position at which you want to inseart an element : ";
        cin>>pos;
        ptr2 = (struct node*)malloc(sizeof(struct node));
        cout<<"enter the value of added node : ";
        cin>>ptr2->value;
        ptr2->prev=NULL;
        ptr2->next=NULL;
        int count=1;
        ptr3=head;
        while (count!=pos){
            ptr3=ptr3->next;
            count++;
        }
        ptr2->prev=ptr3->prev;
        ptr2->next=ptr3;
        ptr2->prev->next=ptr2;
        ptr3->prev=ptr2;
        ptr1=head;
        cout<<"now final doubly linked list is : \n";
            while(ptr1!=NULL){
            cout<<ptr1->prev<<"  ";
            cout<<ptr1->value<<"  ";
            cout<<ptr1->next<<"\n";
            ptr1=ptr1->next;
        }
    }

    void delete_an_element_in_doubly_linked_list(){
        int size,i;
        cout<<"enter the size of linked list : ";
        cin>>size;
        head =(struct node*)malloc(sizeof(struct node));
        cout<<"enter  the value of first node : ";
        cin>>head->value;
        head->prev=NULL;
        head->next=NULL;
        last=head;
        for (i=1;i<size;i++)
        {   ptr=(struct node*)malloc(sizeof(struct node));
            cout<<"enter the value of "<<i+1<<" linked list : ";
            cin>>ptr->value;
            ptr->prev=NULL;
            ptr->next=NULL;
            last->next=ptr;
            ptr->prev=last;
            last=ptr;   
        }
        int pos;
        cout<<"enter the position at which you want to delete an element : ";
        cin>>pos;
        int count=1;
        ptr3=head;
        while (count!=pos)
        {   
            ptr3=ptr3->next;
            count++;
        }
        ptr3->prev->next=ptr3->next;
        ptr3->next->prev=ptr3->prev;
        free(ptr3);    
        cout<<"now final linked list is : ";
        ptr1=head;
        while (ptr1!=NULL)
        {   cout<<ptr1->prev<<"  ";
            cout<<ptr1->value<<"  ";
            cout<<ptr1->next<<"   ";
            ptr1=ptr1->next;
        }
    }

        void search_element_in_doubly_linked_list(){
        int size;
        cout<<"enter the size of doubly linked list : ";
        cin>>size;
        head =(struct node*)malloc(sizeof(struct node));
        cout<<"enter the value of first linked list : ";
        cin>>head->value;
        head->next=NULL;
        head->prev=NULL;
        last=head;
        for(int i=1;i<size;i++){
            ptr = (struct node*)malloc(sizeof(struct node));
            cout<<"enter the value of "<<i+1<<" linked list : ";
            cin>>ptr->value;
            ptr->prev=NULL;
            ptr->prev=last;
            ptr->next=NULL;
            last->next=ptr;
            last=ptr;
        }
          ptr1=head;
        while (ptr1!=NULL){
            cout<<ptr1->prev<<"    ";
            cout<<ptr1->value<<"    ";
            cout<<ptr1->next<<"    ";
            ptr1 =ptr1->next;
        } 
        int x;
        cout<<"\nenter the element you want to search : ";
        cin>>x;
        ptr1=head;
        while (ptr1!=NULL){
            if(ptr1->value==x){
                cout<<"element is present : ";
                int y;
                cout<<"\nenter the modified value : ";
                cin>>y;
                ptr1->value = y;
            }
            ptr1 =ptr1->next;
        } 
          ptr1=head;
        while (ptr1!=NULL){
            cout<<ptr1->prev<<"    ";
            cout<<ptr1->value<<"    ";
            cout<<ptr1->next<<"    ";
            ptr1 =ptr1->next;
        }        
    }   
    int main(){
        // create_and_traverse_doubly_linked_list();
        // inseart_element_in_doubly_linked_list();
        // delete_an_element_in_doubly_linked_list();
        search_element_in_doubly_linked_list();

        return 0;
    }