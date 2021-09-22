
#include <iostream>

using namespace std;

struct node
{

    int data;
    struct node *next;
    };
    struct node *head = NULL, *tail = NULL;
    struct node *head1 = NULL, *tail1 = NULL;


struct node *create1(int item, struct node *last)
{

    struct node *curr;
    curr = (struct node *)malloc (sizeof(struct node ));

    curr -> data = item;
    curr -> next = last;

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

struct node *create2(int item, struct node *next){

struct  node *curr1;
curr1 = (struct node*) malloc (sizeof(struct node ));

if(item %2 == 0){

    curr1-> data = item;
    curr1-> next = next;

if(head1 == NULL){
    head1 = curr1;
    tail1 = curr1;
}else{
tail1 ->next = curr1;
tail1 = curr1;
}

}}

void connect(){
//struct node *new1, *new2;

 //new1 = *head;
 //new2 = *head1;
 struct node *temp1, *temp2;
   temp1= head;
   temp2 = head1;



while(temp1 != NULL){
    temp1 = temp1-> next;
}

while(temp2 != NULL){

    temp1 ->next = temp2;
    temp1 = temp2-> next;
}


}


void display(){
struct node *temp1;
temp1 = head;

while(temp1!= NULL){
    cout<< " "<< temp1-> data;
    temp1 = temp1-> next;
}

}
void display2(){
struct node *temp1;
temp1 = head1;
while(temp1!= NULL){
    cout<< " "<< temp1-> data;
    temp1 = temp1-> next;
}

}

int main(){


struct node *n, *m;

    n = create1( 1, NULL);
    n = create1( 2, NULL);
    n = create1( 3, NULL);
    n = create1( 4, NULL);
    n = create1( 5, NULL);

    m = create2(11, NULL);
    m = create2(22, NULL);
    m = create2(33, NULL);
    m = create2(44, NULL);
    m = create2(55, NULL);

   display();
   display2();
}



