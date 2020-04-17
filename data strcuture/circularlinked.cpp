#include<iostream>
using namespace std;
#include<cstdio>

#include<cstdlib>
struct node

{

    int info;

    struct node *next;

}*last;

 

/*

 * Class Declaration

 */

class circular_llist

{

    public:
    	void create_node(int value);

        void add_begin(int value);

        void add_after(int value);

        void delete_element(int value);

        void display_list();

        circular_llist()

        {

            last = NULL;           

        }

};

 

/*

 * Main :contains menu 

 */

int main()

{

    int choice, element, position;

    circular_llist cl;

    while (1)

    {

        cout<<endl<<"---------------------------"<<endl;

        cout<<endl<<"Circular singly linked list"<<endl;

        cout<<endl<<"---------------------------"<<endl;     

        cout<<"1.Creating list"<<endl;
        cout<<"2.Add at beginning"<<endl;
        cout<<"3.Add at end"<<endl;
        cout<<"4.Delete front"<<endl;
        cout<<"5.Display"<<endl;

        cout<<"6.Quit"<<endl;

        cout<<"Enter your choice : ";

        cin>>choice;

        switch(choice)

        {
        case 1:

            cout<<"Enter the element: ";

            cin>>element;

            cl.create_node(element);

            cout<<endl;

            break;

        case 2:

            cout<<"Enter the element: ";

            cin>>element;

            cl.add_begin(element);

            cout<<endl;

            break;

        case 3:

            cout<<"Enter the element: ";

            cin>>element;


            cl.add_after(element);

            cout<<endl;

            break;

        case 4:

            if (last == NULL)

            {

                cout<<"List is empty, nothing to delete"<<endl;

                break;

            }

            cout<<"Enter the element for deletion: ";

            cin>>element;

            cl.delete_element(element);

            cout<<endl;

            break;

        

        case 5:

            cl.display_list();

            break;
                  

        case 6:

            exit(1);

            break;

        default:

            cout<<"Wrong choice"<<endl;

        }

    }

    return 0;

}
//creating list
void circular_llist::create_node(int value)

{

    struct node *temp;

    temp = new(struct node);

    temp->info = value;

    if (last == NULL)

    {

        last = temp;

        temp->next = last;   

    }

    else

    {

        temp->next = last->next; 

        last->next = temp;

        last = temp;

    }

}
 

 

/*

 * Insertion of element at beginning 

 */

void circular_llist::add_begin(int value)

{

    if (last == NULL)

    {

        cout<<"First Create the list."<<endl;

        return;

    }

    struct node *temp;

    temp = new(struct node);

    temp->info = value;

    temp->next = last->next;

    last->next = temp;

}

 

/*

 * Insertion of element at end 

 */

void circular_llist::add_after(int value)

{

    if (last == NULL)

    {

        cout<<"First Create the list."<<endl;

        return;

    }

    struct node *temp, *s;

    temp = new(struct node);
    temp->info = value;

    /*Element inserted at the end*/
    
	temp->info = value;
	temp->next = temp;	
	if (last == NULL) 
		cout<<temp;
	temp->next = last->next;
	last->next = temp;
	cout<<temp;
}

 

/*

 * Deletion of element from the list

 */

void circular_llist::delete_element(int value)

{

    struct node *temp, *s;

    s = last->next;

      /* If List has only one element*/

    if (last->next == last && last->info == value)  

    {

        temp = last;

        last = NULL;

        free(temp);

        return;

    }

    if (s->info == value)  /*First Element Deletion*/

    {

        temp = s;

        last->next = s->next;

        free(temp);

        return;

    }


    cout<<"Element "<<value<<" not found in the list"<<endl;

}

 

/*

 * Display Circular Link List 

 */

void circular_llist::display_list()

{

    struct node *s;

    if (last == NULL)

    {

        cout<<"List is empty, nothing to display"<<endl;

        return;

    }

    s = last->next;

    cout<<"Circular Link List: "<<endl;

    while (s != last)

    {

        cout<<s->info<<"->";

        s = s->next;

    }

    cout<<s->info<<endl;

}

 
