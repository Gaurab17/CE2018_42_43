#include<iostream>
#include"BST_Array.h"
using namespace std;


Array::Array()
{
	for(int i=0;i<30;i++)
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
	for(int i=1;i<30;){

	
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
	if(node>0 && node<30)
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
int Array::left_child(int index)
{
	if(index*2<=30 && array[index*2]!=-1)
		{
		return index*2;}
	else 
		return 0;
}
int Array::right_child(int index)
{
	if(index*2+1<=30 && array[index*2+1]!=-1)
		{
		return index*2+1;}
	else 
		return 0;
}
void Array::preordertraversal(){
	preorder_traversal(1);
}
void Array::preorder_traversal(int index)
{
	if(index>0 && array[index]!=-1){
	cout<<this->array[index]<<endl;
	preorder_traversal(left_child(index));
	preorder_traversal(right_child(index));}
else
	return;
	

}
void Array::inordertraversal() 
{
	inorder_traversal(1);
}
void Array:: inorder_traversal(int index)
{
	if(index>0 && array[index]!=-1){
	
	inorder_traversal(left_child(index));
	cout<<this->array[index]<<endl;
	inorder_traversal(right_child(index));}
else
	return;

}
int Array::del_lef_large_node(int index)
{

	while(this->array[index]!=-1)
	{
		index=index*2+1;
	}
	return index/2;
	
}
void Array::deleteitem(int data)
{

	if(search(data))
	{
		int place=search(data);

		cout<<"It's position is"<<place<<endl;
		if(left_child(place) && right_child(place))
		{
			int left_sub_tree_pos=left_child(place);
			int maximum_pos=del_lef_large_node(left_sub_tree_pos);
			array[place]=array[maximum_pos];
			array[maximum_pos]=-1;

		}
		else 
		{
			if(left_child(place))
			{
				int l_pos=left_child(place);
				array[place]=array[l_pos];
				array[l_pos]=-1;
				

			}
			else if(!left_child(place) && right_child(place))
			{
				int r_pos=right_child(place);
				array[place]=array[r_pos];
				array[r_pos]=-1;
				
			}
			else
			{
				array[place]=-1;
			}

		}
		
	}


}
bool Array::Search(int data)
{
	search(data);
}
int Array::search(int data)
{
	int index=1;
{
	if(this->array[index]==data)
{
	return index;
} 
else{
	while(index<30)
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
	return index;
	break;
}
	
}

}
return 0;


}




}
int Array::minimum()
{

	int index=1;
	while(this->array[index]!=-1)
{
	index=index*2;

	
}
	return this->array[index/2];
	

}
int Array::maximum()
{

	int index=1;
	while(this->array[index]!=-1)
{
	index=index*2+1;

	
}
	return this->array[index/2];
	

}

void Array::display()
{
	for(int i=0;i<30;i++)
	{
		cout<<i<<" "<<array[i]<<endl;
	}
	}
int main()
{
	cout<<"Hello"<<endl;
	BST *a;
	Array b;
	a=&b;
	a->add(7);
	a->add(3);
	a->add(5);
	a->add(4);
	
	


	
	a->add(6);
	a->add(50);
	a->add(45);
a->add(43);


a->add(39);
	cout<<"minimum is "<<a->minimum()<<endl;
	cout<<"maximum is "<<a->maximum()<<endl;
	
	if(a->search(1001))
	{
	    cout<<"Found";
	}
	else
	cout<<"Not found";
	if(a->search(80))
	{
	    cout<<"Found";
	}
	else
	cout<<"Not found";	if(a->search(06))
	{
	    cout<<"Found";
	}
	else
	cout<<"Not found";
		if(a->search(560))
	{
	    cout<<"Found";
	}
	else
	cout<<"Not found"<<endl;


	cout<<"Preorder"<<endl;
	a->preordertraversal();
	
	
	
	cout<<"Inorder"<<endl;
	a->inordertraversal();
	cout<<" "<<endl;

	b.display();
	
	b.deleteitem(3);
	cout<<"After opt"<<endl;
	b.display();
	cout<<""<<endl;
	a->preordertraversal();

	return 0;}

