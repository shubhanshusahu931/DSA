#include<iostream>
using namespace std;
struct poly{
    int cof;
    int power;
    struct poly *next;
};
struct poly *head,*last,*ptr,*ptr1;
struct poly* create_polynomial(){
    int term;
    cout<<"enter the no of terms in polynomial : ";
    cin>>term;
    for(int i=1;i<=term;i++){
        if(i==1){
            head= (struct poly*)malloc(sizeof(struct poly));
            cout<<"enter the coeficient of "<<i<<" veriable : ";
            cin>> head->cof;
            cout<<"enter the power of "<<i<<" veriable : ";
            cin>>head->power;
            head->next=NULL;
            last=head;
        }
        else{
            ptr = (struct poly*)malloc(sizeof(struct poly));
            cout<<"enter the coeficient of "<<i<<" veriable : ";
            cin>> ptr->cof;
            cout<<"enter the power of "<<i<<" veriable : ";
            cin>>ptr->power;
            ptr->next=NULL;
            last->next=ptr;
            last=ptr;
        }
    }
    return head;
}
void display_polynomial(struct poly *head){
    struct poly *ptr1=head;
    while (ptr1!=NULL)
    {   cout<<ptr1->cof<<"X^"<<ptr1->power;
        if(ptr1->next!=NULL){
            cout<<" + ";
        }
        ptr1=ptr1->next;
    }  
    cout<<endl; 
}
struct poly *head3;
struct poly* add(poly* head1,poly* head2){
    poly* p1=head1;
    poly* p2=head2;
    poly* p3=head3;
    while(p1->next&&p2->next){
        p3= new poly();
        if(p1->power>p2->power){
            p3->power=p1->power;
            p3->cof=p1->cof;
            p1=p1->next;
        }
        else if(p1->power<p2->power){
            p3->power=p2->power;
            p3->cof=p2->cof;
            p2=p2->next;
        }
        else{
            if(p1->power==p2->power){
                p3->power=p1->power;
                p3->cof=(p1->cof+p2->cof);
                p1=p1->next;
                p3=p2->next;
            }
            p3=p3->next;
        }
    } 
    return p3;
}
int main(){
    struct poly* p1,*p2,*p3;
    p1=create_polynomial();
    p2=create_polynomial();
    display_polynomial(p1);
    display_polynomial(p2);
    p3=add(p1,p2);
    display_polynomial(p3);
    
    return 0;
}