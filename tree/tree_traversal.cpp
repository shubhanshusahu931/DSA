#include<iostream>
using namespace std;
struct node{
	char data;
	struct node *left;
	struct node *right;
};
struct node* createnode(){
	struct node *n;
	n=new node();
	cout<<"enter the value of node : ";
	cin>>n->data;
	n->left=NULL;
	n->right=NULL;
	return n;
}
void preoder(node* root){
	if(root==NULL)return;
	cout<<"  "<<root->data<<"\t";
	preoder(root->left);
	preoder(root->right);
}
void postoder(node* root){
	if(root==NULL)return;
	postoder(root->left);
	postoder(root->right);
	cout<<"  "<<root->data<<"\t";
}
void inoder(node* root){
	if(root==NULL)return;
	inoder(root->left);
	cout<<"  "<<root->data<<"\t";
	inoder(root->right);
}
int main(){
	struct node *p=createnode();
	struct node *p1=createnode();
	struct node *p2=createnode();
	p->left=p1;
	p->right=p2;
	cout<<"preorder"<<"\t";
	preoder(p);
	cout<<"postoder"<<"\t";
	postoder(p);
	cout<<"inorder"<<"\t";
	inoder(p);
	return 0;
}