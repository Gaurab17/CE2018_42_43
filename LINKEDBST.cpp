#include<iostream>
#include"LinkedBST.h"
using namespace std;

node::node(){
    data=0;
    left=right=NULL;
}

node::node(int value){
    data=value;
    left=right=NULL;
}

node::~node(){}
void LinkedBST::add(node *root,int data){
	if(root -> data ==0){
		root -> data = data;
		cout<<data<<endl;
	}
	else{
		if(data < root->data){
			if(!root ->left){
				node *newnode= new node(data);
				root -> left = newnode;
			}
			else
				add(root->left, data);
		}
		else if(data > root -> data){
			if(!root ->right){
				node *newnode= new node(data);
				root -> right = newnode;
			}
			else 
				add(root -> right, data);
				cout<<data<<endl;
		}
		
	}
	
}

bool LinkedBST::search(node *root,int data){
	if(root->data==0)
		cout<<"The Tree is empty.So search fail"<<endl;
	else{
		node *p = new node();
		p = root;
		while(p){
			if(data >  p -> data)
				p = p->right;
			else if(data < p->data)
				p = p->left;
			else if (data == p->data){
				cout<<"Search Completed! "<<data <<"was found in the tree"<<endl;
				return true;
		}
			else{
				cout<<data<<"wasn't found in the tree"<<endl;
				return false;
			}
				
					
		}
	}
	cout<<data<<"is not inside the tree"<<endl;
	return false;
}
/*void LinkedBST::preorderTraversal(node *root,int data) { 
    if (!root) 
    return;    
    cout << root->data << "\t";   
    preorderTraversal(root->left);  
    preorderTraversal(root->right); 
}  
*/
int main(){
	LinkedBST *a;
	a->add(&a->root,6);
	a->add(&a->root,4);
	a->add(&a->root,7);
	a->add(&a->root,2);
	
/*	cout<<"Preorder Traversal of the tree is"<<endl;
	a.preordertraversal(&a.root);
	cout<<endl;
*/
	int number;
	char character;
	search:
	cout<<"Enter any number you want to search for in the tree"<<endl;
	cin>>number;
	a->search(&a->root,number);
	cout<<"Do you want to search again(y/n)??"<<endl;
	cin>>character;
	if((character=='y') || (character=='Y')) goto search;
}

