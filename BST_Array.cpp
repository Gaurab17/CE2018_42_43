#include<iostream>
#include"BST_Array.h"
using namespace std;


Array::Array()
{
	for(int i=0;i<16;i++)
	{
		this->array[i]=-1;
	}
}
void Array::add(int data)
{
	if(this->array[0]==-1)
{
		this->array[1]=data;
		this->array[0]=-2;
}
	else
{
	for(int i=1;i<16;){

	
	 if(this->array[i]>data)
	{
		i=2*i;

	}
	else{
		i=2*i+1;
	}
	if(this->array[i]==-1)
{

		this->array[i]=data;
		break;
}
}	
}

	

}
void Array::display()
{
	for(int i=0;i<16;i++)
	{
		cout<<i<<" "<<array[i]<<endl;
	}
	}
int main()
{
	cout<<"Hello"<<endl;
	Array a;
	a.add(8);
	a.add(50);
	a.add(45);
a.add(6);
a.add(56);
a.add(100);
	a.display();
}
