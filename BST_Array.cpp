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
/*bool Array::search(int data,int node)
{
	if(node>0 && node<16)
{
	if(this->array[node]==data)
{
	return true;
}
	else if(data>array[node])
{
	node=node*2+1;

}
	else 
{
	node=node*2;
}
	search(data,node);}
	else
	return false;



}*/
void Array::preorder_traversal(){
preorder_traversal(1);
}
void Array::preorder_traversal(int index)
{
	if(index<16){
	cout<<this->array[index]<<endl;
	preorder_traversal(index*2);
	preorder_traversal(index*2+1);}
else
	return;
	

}
bool Array::search(int data)
{
	int index=1;
{
	if(this->array[index]==data)
{
	return true;
} 
else{
	while(index<16)
{
	if(data>array[index])
{
	index=index*2+1;

}
	else if(data<array[index])
{
	index=index*2;
}
	else if(data==array[index])
{
	return true;
	break;
}
	
}

}
return false;


}




}
int Array::min()
{

	int index=1;
	while(this->array[index]!=-1)
{
	index=index*2;

	
}
	return this->array[index/2];
	

}
void Array::Delete(int data)
{
	int index=1;
	if(this->array[index]==data)
{
	delete this->array[index];
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
a.add(2);
a.add(100);
a.add(1);
	cout<<"Min is "<<a.min()<<endl;
	a.display();
	if(a.search(1001))
	{
	    cout<<"Found";
	}
	else
	cout<<"Not found";
	if(a.search(80))
	{
	    cout<<"Found";
	}
	else
	cout<<"Not found";	if(a.search(06))
	{
	    cout<<"Found";
	}
	else
	cout<<"Not found";
		if(a.search(560))
	{
	    cout<<"Found";
	}
	else
	cout<<"Not found"<<endl;
	a.preorder_traversal();
	a.Delete(8);
	
}

