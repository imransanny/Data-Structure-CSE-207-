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


void remove_duplicate_data(){

    cout<<endl <<" Remove Duplicate data from list: ";
    struct node *current = head, *index = NULL, *temp1 =NULL;

    if( head == NULL){
        return;
    }else{

       while( current != NULL){

        temp1 = current;
        index = current ->next ;

        while(index != NULL){

            if(current->data == index->data){

                  temp1 -> next = index -> next;

            }else {

              temp1 = index;

            }
            index = index -> next;

        }
        current = current ->next;
       }

    }
}

int main()
{
    create();
    display();
    remove_duplicate_data();
    display();

}

