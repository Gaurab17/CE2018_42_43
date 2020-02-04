#include<iostream>
#include"BSTV.h"
using namespace std;

class Array:public BST
{
	int array[10];

public:
	Array();
	void add(int data);
	void display();
};