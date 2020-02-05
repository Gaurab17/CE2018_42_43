#include<iostream>
using namespace std;
class BST{

	public:
		virtual void add(int data)=0;
		//virtual bool search(int data,int node=1)=0;
		virtual bool search(int data)=0;
		virtual void preorder_traversal(int index=1)=0;


};
