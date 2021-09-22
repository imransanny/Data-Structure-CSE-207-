
#include<stdio.h>
#include<stdlib.h>
struct Qnode
{
    int data;
    struct Qnode *next;
};
struct Qnode *front, *rear;

void create();
void delete();
void oddapp();
void display();

void main ()
{
    int option;
    while(option != 4)
    {


        printf("\n1.create an element\n2.Delete an element\n3.Display the queue\n6..oddapp\n5exit\n");
        printf("\nEnter your choice : ");
        scanf("%d",& option);
        switch(option)
        {
            case 1:
            create();
            break;
            case 2:
            delete();
            break;
            case 3:
            display();
            break;
            case 6:
            oddapp();
            break;

            case 5:
            break;
            default:
            printf("\nEnter valid option\n");
        }
    }
}
void create()
{
    struct Qnode *ptr;
    int item,n,i ;

    ptr = (struct Qnode *) malloc (sizeof(struct Qnode));
    if(ptr == NULL)
    {
        printf("Empty");
        return;
    }
    else
    { // printf("Enter the total value: ");
       // scanf("%d", &n);

        printf("\nEnter value: ");
        //  for(i=0 ; i<n ; i++){
                scanf("%d",&item);
        ptr -> data = item;

        if(front == NULL)
        {
            front = ptr;
            rear = ptr;
            front -> next = NULL;
            rear -> next = NULL;
        }
        else
        {
            rear -> next = ptr;
            rear = ptr;
            rear->next = NULL;
       //}
    }
}}




void oddapp(){


struct Qnode *temp, *even, *odd, *rep;

temp =  front;

if(temp == NULL){
   printf("queuue empty");
}else{
       printf("loop");
        while(front != NULL){

        if(temp->data %2 == 0){
            even = temp;
        }

        if(temp->data %2 !=0 ){
            odd = temp ;
        }
        even = rep;
        even = odd;
        odd=  rep;
        front = even ->next;

    }

}
}




void delete ()
{
    struct Qnode *ptr;
    if(front == NULL)
    {
        printf("\n empty\n");
        return;
    }
    else
    {
        ptr = front;
        front = front -> next;
        free(ptr);
    }
}

void display()
{
    struct Qnode *ptr;
    ptr = front;
    if(front == NULL)
    {
        printf("\nEmpty queue\n");
    }
    else
    {   printf("\nprint values :\n");
        while(ptr != NULL)
        {
            printf("  %d  ",ptr -> data);
            ptr = ptr -> next;
        }
    }
}
