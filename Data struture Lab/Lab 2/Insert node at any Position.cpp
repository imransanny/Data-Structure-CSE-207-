#include<iostream>

using namespace std;

struct node
{
    int data;
    struct node *next;

};
struct node *head = NULL, *tail = NULL;

void create()
{
    struct node *current_node;
    int i, n, item;
    cout<<"Enter the total value: ";
    cin>>n;
    cout<<"Enter the value :";
    for(i=0 ; i<n ; i++)
    {
        current_node = (struct node*) malloc (sizeof(struct node));
        cin>> item;
        current_node->data = item;
        current_node ->next = NULL;

        if(head == NULL)
        {
            head = current_node;
            tail = current_node;
        }
        else
        {

            tail->next = current_node;
            tail = current_node;
        }

    }

}

display()
{
    struct node *temp;
    temp = head;

    while(temp != NULL)
    {
        cout<<" " <<temp -> data;
        temp = temp -> next;

    }
}

void insert_node_at_any_position()
{
    struct node *newnode,  *curr, *temp, *temp1;
    int i, pos;

    newnode = (struct node*)malloc(sizeof(struct node));
    cout<<endl;
    cout<<"Enter the data: ";
    cin>> newnode->data;
    cout<<"Enter the position: ";
    cin>> pos;
    pos = pos-1;

    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        temp = head;
        for(i=1 ; i<= pos; i++)
        {
            temp1 = temp;
            temp = temp->next;
        }
        temp1->next = newnode;
        newnode->next = temp;
    }
}


int main()
{

    create();
    display();
    insert_node_at_any_position();
    display();
}
