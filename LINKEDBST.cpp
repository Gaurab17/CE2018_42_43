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
				cout<<data<<"was not found in the tree"<<endl;
				return false;
			}
				
					
		}
	}
	//cout<<data<<"is not inside the tree"<<endl;
	//return false;
//}

int main(){
	LinkedBST A;
	A.search(20);
	return 0;
}
