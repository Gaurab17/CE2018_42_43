#include "LINKEDBST.h"
#include "BST.h"
#include<iostream>
using namespace std;
	
LinkedBST::LinkedBST(){
	root==NULL;
}
LinkedBST::~LinkedBST(){
}

/*void LinkedBST::add(Node* root,int data){
	cout<<"Hello"<<endl;
	
}*/

/*void LinkedBST::preorder_traversal(){
	cout<<"Hello"<<endl;
}*/

bool LinkedBST::search(int data){
	Node* p=root;
	if(root->data==NULL){
		cout<<"Empty"<<endl;
	}
		while(!p==NULL){
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
	//cout<<data<<"is not inside the tree"<#include"LinkedBST.h"
#include<iostream>
using namespace std;

node::node(){
    data=0;
    left=right=nullptr;
}

node::node(int value){
    data=value;
    left=right=nullptr;
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
				cout<<data<<"was not found in the tree"<<endl;
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
}<endl;
	//return false;
//}

int main(){
	LinkedBST A;
	A.search(20);
	return 0;
}
