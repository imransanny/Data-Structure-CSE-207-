#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
}*head= NULL, *tail = NULL;

void create(){
   struct node *current_node;
   int i, n, item;
   cout<<"Enter the total number: ";
   cin>> n;
   cout<<"Enter the number: "  ;

   for(i=0 ; i<n ; i++){

     current_node = (struct node*) malloc(sizeof(struct node));
     cin>> item;
     current_node ->data = item;
     current_node ->next = NULL;

     if(head == NULL){
        head = current_node;
        tail = current_node;

     }else{
          tail -> next = current_node;
          tail = current_node;
     }
   }
}


void delete_from_Last_possition(){

        struct node *temp,*temp1;
        if(head!=NULL) {
                    temp = head;
                    while(temp->next!=NULL) {
                                    temp1 = temp;
                                    temp = temp->next;
                      }
                      temp1->next = NULL;
                     delete(temp);
         }

    cout<< endl;

    }



void display()
{
    struct node *temp;

    temp = head;

    while(temp != NULL)
    {
        cout<< " " <<temp->data;
        temp = temp -> next;
    }

}


int main()
{
    create();
    display();
    delete_from_Last_possition();
    display();
}




