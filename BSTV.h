#ifndef BINARYTREE_h
#define BINARYTREE_h


class BST{
	public:
		virtual void add(int data)=0;

		//virtual bool search(int data,int node=1)=0;
		virtual int search(int data)=0;
		virtual void preorder_traversal(int index=1)=0;
		virtual void inorder_traversal(int index=1)=0;
		virtual int left_child(int index)=0;
		virtual int right_child(int index)=0;

		virtual int min()=0;

		virtual int max()=0;


		virtual bool search(int data)=0;

        virtual void preordertraversal()=0;
        virtual void inordertraversal() = 0;
        virtual void deleteitem(int data) = 0;

		virtual int maximum() = 0;
		virtual int minimum() = 0;


};
#endif
