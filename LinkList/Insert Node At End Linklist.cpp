#include<iostream>

using namespace std;

struct node{
int data;
struct node *next;
} *head= NULL, *tail = NULL;

void create(){
 struct node *current_node, *temp;
 int  n, item;
 cout<<"Enter the total number: ";
 cin>> n;
 cout<<"Enter the data: ";

for(int i=1 ; i<=n ; i++){
   current_node = (struct node*) malloc (sizeof(struct node));
   cin>>item;
   current_node ->data = item;
   current_node ->next = NULL;

    if(head == NULL){
        head = current_node;
        tail = current_node;
    }else{
        tail->next = current_node;
        tail = current_node;

    }
 }}

  void insert_node_at_the_END(){

   struct node *newnode, *temp;
   newnode = (struct node*) malloc (sizeof(struct node));
   cout<<"\nEnter the insert value at the End:";
   cin>> newnode->data;
    newnode ->next = NULL;

    if(head == NULL){
        head = newnode;
        tail = newnode;

    }else{
          temp = head;
          while(temp->next != NULL){
            temp = temp->next;
          }
          temp->next = newnode;
          tail = newnode;

    }
 }

void display(){
  struct node *temp;
  temp = head;

  while(temp != NULL){
    cout<<" " << temp->data;
    temp = temp->next;
  }

}

int main(){
create();
display();
insert_node_at_the_END();
display();
}

