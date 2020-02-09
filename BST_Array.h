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
	void preorder_traversal(int index);
	void inorder_traversal(int index);
	void preorder_traversal();
	int left_child(int index);
	int right_child(int index);
	int del_lef_large_node(int index);
	int min();

	int max();
	void Delete(int data);

};
