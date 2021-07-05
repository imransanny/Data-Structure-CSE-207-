#include<iostream>

using namespace std;

struct node {
       int value;
       struct node *next;
};
struct node *head = NULL, *tail = NULL;

void create(){
  struct node *current_node;
  int i, n, item;
  cout<<"Enter the toal number in list: ";
  cin>> n;
  printf("Enter the input number:\n");
  for(i=1; i<=n ; i++){
    current_node = (struct node*) malloc(sizeof(struct node));
    cin>> item;
    current_node -> value = item;
    current_node -> next = NULL;

    if(head == NULL){
        head = current_node;
        tail = current_node;
    }else{
        tail -> next = current_node;
        tail = current_node;
    }

  }}

 void  delete_any()
{
        struct node *temp,*temp1;
        int key; //= data to be deleted;
       cout<<"Enter deleted the data: ";
       cin>> key;
        if(head!=NULL) {
                    temp = head;
                    while(temp->next!=NULL && temp->value != key) {
                                    temp1 = temp;
                                    temp = temp->next;
                      }
                     if (temp->value== key){
                      temp1->next = temp->next;
                      free(temp);
                       }
                      else {
                        cout<<"Item not found ";
         }
         }
}

void display(){
  struct node *temp;
  temp = head;
  while(temp != NULL){
    cout<< temp-> value;
    temp = temp -> next;
  }
}

int main(){
create();
delete_any();
display();
}
