#include<stdio.h>
#include<stdlib.h>

struct node {
       int value;
       struct node *next;
};
struct node *head = NULL, *tail = NULL;

void create(){
  struct node *current_node;
  int i, n, item;
  printf("Enter the toal number in list: ");
  scanf("%d", &n);
  printf("Enter the input number:\n");
  for(i=1; i<=n ; i++){
    current_node = (struct node*) malloc(sizeof(struct node));
    scanf("%d", &item);
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

void insert_at_beg(){
struct node *newnode, *temp;
newnode = (struct node*)malloc(sizeof(struct node));
printf("\nEnter new node at the beginning: ");
scanf("%d", &newnode->value);
newnode -> next = NULL;
if(head == NULL ){
    head = newnode;
    tail = newnode;}
    else{
        newnode -> next =head;
        head = newnode;
    }
}
void display(){
  struct node *temp;
  temp = head;
  while(temp != NULL){
    printf(" %d ", temp-> value);
    temp = temp -> next;
  }


int main(){
create();
display();
insert_at_beg();
display();
}
