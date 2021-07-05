#include<iostream>

using namespace std;

struct node
{
    int data;
    struct node *next;
} *head = NULL, *tail = NULL;

void  create()
{
    struct node *curr;
    int i, n, item;

    cout<< " Enter the total list: ";
    cin>>n;
    cout<< "Enter the data : ";

    for( i=0; i<n ; i++)
    {

        curr = (struct node *) malloc (sizeof (struct node));
        cin>> item;
        curr -> data = item;
        curr -> next = NULL;

        if(head == NULL)
        {
            head = curr;
            tail = curr;
        }
        else
        {
            tail ->next = curr;
            tail = curr;
        }
    }
}

display()
{
    struct node *temp;

    temp = head;
    while (temp != NULL)
    {

        cout<< " " << temp -> data;
        temp = temp -> next;
    }

}

void search_node( )
{
    struct node *temp;
    int search_node, c=0;
    temp = head;

    cout<<" Enter the searching node : ";
    cin>>search_node;

    if( temp == NULL )
    {
        cout<< "The list is empty! ";
    }
    else
    {

        while (temp != NULL)
        {

            if(temp ->data == search_node)
            {
                cout<<"The is exist the list :";
                cout<< temp->data;
                break;
            }

           temp = temp ->next;
           c++;

        }
        cout<<endl << "Count = "<<c;
        if(temp == NULL){

        cout<<endl <<"This data does not existed in search: " ;
        }

    }
}

int main()
{

    create();
    display();
    search_node();
}
