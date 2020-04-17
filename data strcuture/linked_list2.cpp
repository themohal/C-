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

        void insert_pos();
        void sort();

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

        cout<<"1.Insert Node at beginning"<<endl;

        cout<<"2.Insert node at position"<<endl;

        cout<<"3.Sort Link List"<<endl;

        cout<<"4.Display Linked List"<<endl;

        cout<<"5.Exit "<<endl;

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

            cout<<"Inserting Node at a given position:"<<endl;

            sl.insert_pos();

            cout<<endl;

            break;

        case 3:

            cout<<"Sort Link List: "<<endl;

            sl.sort();

            cout<<endl;

            break;

        case 4:

            cout<<"Display elements of link list"<<endl;

            sl.display();

            cout<<endl;

            break;

        

        case 5:

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

 

/*

 * Inserting element in beginning

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

 * Insertion of node at a given position

 */

void single_llist::insert_pos()

{

    int value, pos, counter = 0; 

    cout<<"Enter the value to be inserted: ";

    cin>>value;

    struct node *temp, *s, *ptr;

    temp = create_node(value);

    cout<<"Enter the postion at which node to be inserted: ";

    cin>>pos;

    int i;

    s = start;

    while (s != NULL)

    {

        s = s->next;

        counter++;

    }

    if (pos == 1)

    {

        if (start == NULL)

        {

            start = temp;

            start->next = NULL;

        }

        else

        {

            ptr = start;

            start = temp;

            start->next = ptr;

        }

    }

    else if (pos > 1  && pos <= counter)

    {

        s = start;

        for (i = 1; i < pos; i++)

        {

            ptr = s;

            s = s->next;

        }

        ptr->next = temp;

        temp->next = s;

    }

    else

    {

        cout<<"Positon out of range"<<endl;

    }

}

 

/*

 * Sorting Link List

 */

void single_llist::sort()

 {

    struct node *ptr, *s;

    int value;

    if (start == NULL)

    {

        cout<<"The List is empty"<<endl;

        return;

    }

    ptr = start;

    while (ptr != NULL)

    {

        for (s = ptr->next;s !=NULL;s = s->next)

        {

            if (ptr->info > s->info)

            {

                value = ptr->info;

                ptr->info = s->info;

                s->info = value;

            }

        }

        ptr = ptr->next;

    }

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
