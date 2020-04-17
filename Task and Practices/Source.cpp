#include"arraySort.h"

int main()
{
	array ar;

	ar.insert_array();

	cout<<"Your Input"<<endl;

	ar.print();
	

	cout<<endl;

	cout<<"Values In decreasing order"<<endl;

	ar.bubble();

	ar.print();

}