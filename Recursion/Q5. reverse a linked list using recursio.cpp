
#include<iostream>

using namespace std;


struct node
{
    int data;
    struct node* next;
};

struct node* head, *tail;

void insert_node(int item)
{
   struct node* newnode ;
    newnode = (struct node*)malloc(sizeof(struct node*));
    newnode->data = item;
    newnode->next = NULL;

    if(head == NULL){

    head = newnode;
    tail = newnode;

    }else{
    tail -> next = newnode;
    tail = newnode;
    }

}

void reverse(struct node* p)
{
    struct node* temp;
    if(p->next == NULL)
    {

        head = p;
        return;
    }
    reverse(p->next);

    temp = p->next;
    temp->next = p;
    p->next = NULL;
}

void display()
{

    struct node* temp;
    temp = head;

    while(temp!=NULL)
    {
        cout<<" " <<temp->data;
        temp=temp->next;
    }
    printf("\n");
}

int main()
{
  int num, n;
    head = NULL;

  /*  cout<<"Enter the total Number of list: ";
    cin>> n;

    cout<<"Enter the "<<n <<"number :" ;
    for(int i=0; i<n; i++ ){

                  cin>> num;
                  insert_node(num);
    }

   */

    insert_node(1);
    insert_node(2);
    insert_node(3);
      insert_node(4);
    insert_node(5);

    cout<< "Linklist :";
    display();

    reverse(head);
    cout<< "Reverse Linklist :";
    display();

}
