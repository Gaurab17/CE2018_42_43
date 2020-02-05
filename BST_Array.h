#include<iostream>
#include"BSTV.h"
using namespace std;

class Array:public BST
{
	int array[16];

public:
	Array();
	void add(int data);
	void display();
	//bool search(int data,int node=1);
	bool search(int data);
	void preorder_traversal(int index=1);
};
