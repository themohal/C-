#include<iostream>
using namespace std;
const int MAX=10;
class Queue
{
	private:
		int arr[MAX];
		int front,rear;
		public:
		    int choice,item;
		    		queue(){front=-1;rear=-1;}
		    void choicef()
		    {
	if (choice==1)
	{
		 addq();

	}
	else if(choice==2)
{
delq();
}
else if(choice==3)
{
    traverse();
}
else if(choice==4)
{
	cout<<"Thanks For Using\n";
}
}

display()
				{
					cout<<"                         MAIN MENU\n";
					cout<<"             PRESS 1 FOR INSERTION\n";
					cout<<"             PRESS 2 FOR DELETION\n";
					cout<<"             PRESS 3 FOR DISPLAY\n";
					cout<<"             PRESS 4 TO EXIT\n";
					cout<<"ENTER YOUR CHOICE:";
					cin>>choice;
					choicef();
				}
				void traverse()
				{
				    for(int i=0;i<=rear;i++)
                        cout<<" "<<arr[i];
                        cout<<endl;
                        display();
				}

			void addq();
			int delq();


};


void Queue::addq()
{
	if(rear==MAX-1)
	{
		cout<<"\nQueue is full";
		return;
	}
	cout<<"Enter ELement: "<<endl;
	cin>>item;
	arr[++rear]=item;

	cout<<"inserted element is= "<<arr[rear];
	if(front==-1)
	front=0;
	cout<<endl;
	display();
}
int Queue::delq()
{
int data;
if (front==-1)
{
	cout<<"\nQueue is empty";
	return NULL;
}
data=arr[front];
arr[front]=0;
if(front==rear)
front=rear=-1;
else
front++;
cout<<"deleted Item is: "<<data;
cout<<endl;
display();
}
int main()
{
	Queue a;
	a.queue();
	a.display();


}
