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
        // ********* LINKED LIST ********

    struct Node {
            int value;
            struct Node  *next;
        };
    struct Node *head,*ptr,*last,*ptr1,*ptr2,*ptr3,*ptr4,*ptr5;

    void create_and_traverse_linked_list(){
        int size ,i;
        cout<<"enter the size of linked list : ";
        cin >> size;
        head = (struct Node*)malloc(sizeof(struct Node));
        cout<<"enter the value  of 1 st node: ";
        cin>>head->value;
        head->next=NULL;
        last=head;
        for(i=1;i<size;i++){
            ptr=(struct Node*)malloc(sizeof(struct Node));
            cout<<"enter the value of "<<i+1<<" Node : ";
            cin>>ptr->value;
            ptr->next=NULL;
            last->next=ptr;
            last=ptr;
        }
        ptr1=head;
        while(ptr1!=NULL){
        cout<<ptr1->value<<"   ";
        cout<<ptr1->next<<" \t\t";
        ptr1=ptr1->next;
        }
    }

    void inseart_an_Node_in_linked_list_at_first(){
        int size,i;
        cout<<"enter the size of linked list ";
        cin>>size;
        head =(struct Node*)malloc(sizeof(struct Node));
        cout<<"enter the value of 1 st Node : ";
        cin>>head->value;
        head->next=NULL;
        last=head;
        for(i=1;i<size;i++){
            ptr =(struct Node*)malloc(sizeof(struct Node));
            cout<<"enter the value of "<<i+1<<" Node: ";
            cin>>ptr->value;
            ptr->next=NULL;
            last->next=ptr;
            last=ptr;           
        }
        ptr1=head;
        while(ptr1!=NULL){
            cout<<ptr1->value<<" ";
            cout<<ptr1->next<<"\t\t";
            ptr1=ptr1->next;
        }
        ptr2 = (struct Node*)malloc(sizeof(struct Node));
        cout<<"\nenter the value of added node : ";
        cin>>ptr2->value;
        ptr2->next=head;
        head=ptr2;
        cout<<"\nnow the final linked list is : ";
        ptr1=head;
        while(ptr1!=NULL){
            cout<<ptr1->value<<" ";
            cout<<ptr1->next<<"\t\t";
            ptr1=ptr1->next;
        }
    }

    void inseart_an_element_in_linked_list_at_position(){
        int size;
        cout<<"enter the size of linked list : ";
        cin>>size;
        head=(struct Node*)malloc(sizeof(struct Node));
        cout<<"enter the value of first linked list : ";
        cin>>head->value;
        head->next=NULL;
        last=head;
        for(int i=1;i<size;i++){
            ptr=(struct Node*)malloc(sizeof(struct Node));
            cout<<"enter the value of "<<i+1<<"th linked list : ";
            cin>>ptr->value;
            ptr->next=NULL;
            last->next=ptr;
            last=ptr;
        }
        ptr1=head;
        while (ptr1!=NULL){
        cout<<ptr1->value<<" ";
        cout<<ptr1->next<<" ";
        ptr1=ptr1->next;
        }
        int pos;
        cout<<"\nenter the position at which you want to inseart an Node : ";
        cin>>pos;
        ptr2=(struct Node*)malloc(sizeof(struct Node));
        cout<<"\nenter the value of added Node : ";
        cin>>ptr2->value;
        ptr2->next=NULL;
        int count=1;
        ptr3=head;
        while(count<pos-1){
            ptr3=ptr3->next;
            count++;
        }
        ptr2->next=ptr3->next;
        ptr3->next=ptr2;
        cout<<"Now final linkedlist is : ";
        ptr1=head;
        while (ptr1!=NULL)
        { cout<<ptr1->value<<" ";
        cout<<ptr1->next<<" ";
        ptr1=ptr1->next;
        }
    }

    void delete_a_node_in_linked_list(){
        int size;
        cout<<"enter the size of linked list : ";
        cin>>size;
        head=(struct Node*)malloc(sizeof(struct Node));
        cout<<"enter the value of first linked list : ";
        cin>>head->value;
        head->next=NULL;
        last=head;
        for(int i=1;i<size;i++){
            ptr=(struct Node*)malloc(sizeof(struct Node));
            cout<<"enter the value of "<<i+1<<"th linked list : ";
            cin>>ptr->value;
            ptr->next=NULL;
            last->next=ptr;
            last=ptr;
        }
        ptr1=head;
        while (ptr1!=NULL){
        cout<<ptr1->value<<" ";
        cout<<ptr1->next<<" ";
        ptr1=ptr1->next;
        }
        int pos;
        cout<<"\nenter the position at which you want to delete an Node : ";
        cin>>pos;
        ptr3=head;
        int count=1;
        while(count!=pos-1){
            ptr3=ptr3->next;
            count++;
        }
        ptr4=ptr3->next;
        ptr3->next=ptr3->next->next;
        free(ptr4);
        cout<<"now final linked list is: ";
        ptr1=head;
        while (ptr1!=NULL){
        cout<<ptr1->value<<" ";
        cout<<ptr1->next<<" ";
        ptr1=ptr1->next;
        }        
    }


        // void trevarsal_in_linklist(){
        //     struct node * ptr;
        //     ptr = (node *)malloc(size)
        // }

        // program in c language
        void insert_element_at_particular_position(){
            int size,i,elm,pos,a[10];
            printf("enter the size of element :");
            scanf("%d",&size);
            printf ("enter the elements of an array : ");
            for (i=0;i<size;i++){
                scanf ("%d",&a[i]);
            }
            printf ("array elements are :");
             for (i=0;i<size;i++){
                printf ("%d",a[i]);
            }
            printf ("\nenter the position where you want to insert an element in array :");
            scanf ("%d",&pos);
            printf ("\nenter the element that you want to insert :");
            scanf ("%d",&elm);
            for (i=size;i>pos;i--){
                a[i+1] = a[i];
            }
            a[pos] = elm;
            printf ("after inserting element array is :");
            for (i=0;i<size;i++){
                printf("%d",a[i]); 
            }
        }

        // program in c language
        void delete_element_from_any_position(){
            int size,i,a[10],pos,elm;
            printf ("enter the size of an element :");
            scanf ("%d",&size);
            printf ("enter the elements in array:");
            for (i=0;i<size;i++){
                scanf ("%d",&a[i]);
            }
            printf ("\narray elements are :");
             for (i=0;i<size;i++){
                printf ("%d",a[i]);
            }
            printf ("\nenter the poition at you want to delete the element :");
            scanf ("%d",&pos);
            for (i=pos;i<size;i++){
                a[i] = a[i+1];
            }
            printf ("\nafter deleting the element array is :");
            for (i=0;i<size;i++){
                printf ("%d",a[i]);                
            }
        }

        void searching_an_element_in_array(){
            int elm,i,size,a[10];
            printf ("enter the size of an array :");
            scanf ("%d",&size);
            printf ("\nenter the elements of an array :");
            for (i=0;i<size;i++){
                scanf ("%d",&a[i]);
            }
            printf ("\n array elements are :");
            for (i=0;i<size;i++){
                printf ("%d",a[i]);
            }
            printf ("\nenter the element that you want to search :");
            scanf ("%d",&elm);
            printf ("element is at the index :");
            for (i=0;i<size;i++){
                if (elm == a[i]){
                    printf ("%d",i);
                }
            }
        }
           
        void delete_an_element_at_endposition(){
            int size,i,a[10],elm;
            printf ("enter the size of an array :");
            scanf ("%d",&size);
            printf ("enter the elements of array :");
            for (i=0;i<size;i++){
                scanf ("%d",&a[i]);
            }
            printf ("array elements are :");
            for (i=0;i<size;i++){
                printf ("%d",a[i]);
            }
            printf ("after deleting array element at the end position :");
            for (i=0;i<size;i++){
                a[i] = a[i+1];
            }
            printf ("%d",a[i]);
                   
    
        }

            
          
            
        
    

int main() {
    // traversal_in_array();
    // search_element_in_array();
    // insert_an_element_in_array_at_end();
    // insert_element_in_array_at_first();
    // insert_element_in_array_at_pos();
    // merg_two_array();
    // merg_two_array_using_third_array();
    // delete_element_from_array();
    // reverse_of_an_array();

    // linked list
    
    // create_and_traverse_linked_list();
    // inseart_an_Node_in_linked_list_at_first();
    // inseart_an_element_in_linked_list_at_position();
    delete_a_node_in_linked_list();



    // ***********LABH PROGRAM **********

    //  trevarsal_in_linklist();
    // insert_element_at_particular_position();
    // delete_element_from_any_position();
    // searching_an_element_in_array();
    // delete_an_element_at_endposition();


    return 0;
}