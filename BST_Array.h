#include<iostream>
#include"BSTV.h"
using namespace std;

class Array:public BST
{
	int array[30];

public:
	Array();
	void add(int data);
	void display();
	//bool search(int data,int node=1);
	int search(int data);
	bool Search(int data);
	void preorder_traversal(int index);
	void inorder_traversal(int index);
	void preordertraversal();
    void inordertraversal();
	int left_child(int index);
	int right_child(int index);
	int del_lef_large_node(int index);
	int minimum();

	int maximum();
	void deleteitem(int data);

};
