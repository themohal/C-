#include<iostream>
using namespace std;
class box
{
private:
	float length,width,height;
public:
	void get_data()
	{
		cout<<"Enter Lenght:"<<endl;
		cin>>length;
		cout<<"Enter Width:"<<endl;
		cin>>width;
		cout<<"Enter Height:"<<endl;
		cin>>height;
	}
	void result()
	{
		//or float v;
		//v=length*width*height and cout<<v;
		cout<<"Volume of Box is="<<length*width*height<<endl;
	}
};
void main()
{
	box s1;
	s1.get_data();
	s1.result();
}
