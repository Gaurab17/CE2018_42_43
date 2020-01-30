#include"BST.h"

class Node{
	int data;
	Node* left;
	Node* right;	
};
class LinkedBST:public BST{
	private:
		Node* root;
	
	public:
		void preorder_traversal();
		void add(int data);
		bool search(int data);	
};

