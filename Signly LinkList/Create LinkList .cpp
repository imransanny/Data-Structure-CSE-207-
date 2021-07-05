#include<iostream>>

using namespace std;

struct node{
int data;
struct node *next;

};
struct node *head =NULL, *tail = NULL;

void create(){

struct node *curr;
int i, n ,item;
cout<<"Enter the total value: ";
cin>>n;
cout<<"Enter the value: \n";
for(i=1; i<= n ; i++){
    curr = (struct node*) malloc(sizeof(struct node));
    cin>>item;
    curr ->data = item;
    curr -> next = NULL;

    if(head == NULL){
        head = curr;
        tail = curr;

    }else{
       tail -> next = curr;
       tail = curr;

    }

}
}

void display1(){
struct node *temp;
temp = head;

while (temp!= NULL){

    cout<<" " << temp ->data;
    temp = temp->next;

}
}

int main(){
create();
display1();

}

