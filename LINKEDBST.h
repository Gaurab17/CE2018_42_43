#ifndef LINKEDBST_h
#define LINKEDBST_h 
#include"BST.h"

class Node{
	public:
		int data;
		Node* left;
		Node* right;
		Node();
		Node(int);
		~Node();	
};
class LinkedBST:public BinarySearchTree
{
	private:
		Node* root;
	
	public:
		LinkedBST();
		~LinkedBST();
		void preorder_traversal();
		void add(int data);
		bool search(Node *root,int data);	
};
#endif
