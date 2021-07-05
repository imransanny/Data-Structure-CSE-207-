#include<iostream>

using namespace std;

struct node
{
    int data;
    struct node *next;
} *head =NULL, *tail = NULL ;


void create()
{
    struct node *current;
    int i, n, item;

    cout<< "Enter the total number : " ;
    cin>> n ;
    cout<< "Enter the data :  " ;

    for(i=1; i<=n; i++)
    {
        current = (struct node*)malloc (sizeof(struct node));
        cin>> item;
        current->data = item;
        current ->next = NULL;

        if(head == NULL)
        {
            head = current;
            tail = current;

        }
        else
        {
            tail -> next = current;
            tail = current;

        }
    }
}


void display()
{
    struct node *temp;
    temp= head;

    while(temp != NULL)
    {

        cout<< " " << temp ->data;
        temp= temp ->next;
    }

}

void reverse_in_Linklist()
{
      cout<<endl << "Reverse List :";
       struct node *current , *previous = NULL, *next=NULL;
       current = head;

       while(current != NULL ){

            next = current->next;
            current ->next = previous;
            previous = current;
            current = next;

       }
       head = previous;

}


int main()
{
    create();
    display();
    reverse_in_Linklist();
    display();

}
