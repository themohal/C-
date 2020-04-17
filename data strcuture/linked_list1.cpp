#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;

/*

 * Node Declaration

 */

struct node

{

    int info;

    struct node *next;

}*start;

 

/*

 * Class Declaration

 */

class single_llist

{

    public:

        node* create_node(int);

        void insert_begin();
        void display();

        single_llist() 

        {

            start = NULL;

        }

};

 

/*

 * Main :contains menu 

 */

main()

{

    int choice, nodes, element, position, i;

    single_llist sl;

    start = NULL;

    while (1)

    {

        cout<<endl<<"---------------------------------"<<endl;

        cout<<endl<<"Operations on singly linked list"<<endl;

        cout<<endl<<"---------------------------------"<<endl;

        cout<<"1.CREATE A LINKED LIST:"<<endl;
        cout<<"2.Display Linked List"<<endl;
		cout<<"3.Exit "<<endl;

        cout<<"Enter your choice : ";

        cin>>choice;

        switch(choice)

        {

        case 1:

            cout<<"Inserting Node at Beginning: "<<endl;

            sl.insert_begin();

            cout<<endl;

            break;

        case 2:

            cout<<"Display elements of link list"<<endl;

            sl.display();

            cout<<endl;

            break;

        case 3:

            cout<<"Exiting..."<<endl;

            exit(1);

            break;  

        default:

            cout<<"Wrong choice"<<endl;

        }

    }

}

 

/*

 * Creating Node

 */

node *single_llist::create_node(int value)

{

    struct node *temp, *s;

    temp = new(struct node); 

    if (temp == NULL)

    {

        cout<<"Memory not allocated "<<endl;

        return 0;

    }

    else

    {

        temp->info = value;

        temp->next = NULL;     

        return temp;

    }

}

 

 /* Inserting element in beginning

 */

void single_llist::insert_begin()

{

    int value;

    cout<<"Enter the value to be inserted: ";

    cin>>value;

    struct node *temp, *p;

    temp = create_node(value);

    if (start == NULL)

    {

        start = temp;

        start->next = NULL;          

    } 

    else

    {

        p = start;

        start = temp;

        start->next = p;

    }

    cout<<"Element Inserted at beginning"<<endl;

}




/*

 * Display Elements of a link list

 */

void single_llist::display()

{

    struct node *temp;

    if (start == NULL)

    {

        cout<<"The List is Empty"<<endl;

        return;

    }

    temp = start;

    cout<<"Elements of list are: "<<endl;

    while (temp != NULL)

    {

        cout<<temp->info<<"->";

        temp = temp->next;

    }

    cout<<"NULL"<<endl;

}
