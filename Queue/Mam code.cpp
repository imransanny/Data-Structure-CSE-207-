#include<iostream>
using namespace std;

/*
struct Qnode *newNode(int k){

struct Qnode *temp = (struct Qnode *)malloc (sizeof(struct Qnode ));
tmep -> key = k;
temp->next = NULL;
return temp;
}; */
struct Qnode
{
    int key;
    struct Qnode *temp;
};

struct Queue
{
    struct Qnode *front, *rare;
} *q;

struct Qnode *newnode (int k)
{

   struct Qnode *temp = (strcut Qnode*) malloc (sizeof(struct Qnode));
    temp ->key = k;
    temp ->next = NULL;
    return temp;

}

struct Queue *createQueue()
{
    struct Queue *q = (struct Queue*) malloc (sizeof(struct Queue));
    q->front = q-> rare = NULL;
    return q;
};

void enQueue(struct Queue  *q, int k )
{
    struct Qnode *temp = newNode(k);

    if(q->rare = NULL)
    {
        q->front = q ->rare = temp;
        return;
    }
    q->rare ->next = temp;
    q->rare = temp;

}

void deQueue(struct Queue *q)
{

    if(q -> front == NULL)
    {
        cout<<"Queue Empty";
        return NULL;
    }

    struct Qnode *temp = q->front;
    if(q-> front == NULL)
    {

        q->rare = NULL ;
        cout<<"Queue Empty: ";
    }
    else
    {
        cout<< "Queue Front : " << q->front->key ;
        cout<<"\nQueue Rare : " << q->rare->key ;

    }
    free(temp);

}

int main()
{
    q= createQueue();
    int item;
    int choice

    while(1)
    {


        printf("\n1.create an element\n2.Delete an element\n3.Display the queue\n4.Exit\n");
        printf("\nEnter your choice : ");
        scanf("%d",& choice);
        switch(choice)
        {
        case 1:
            cout<<"Input item :";
            cin>> item;
            enQueue(p, item);
            cout<< "Queue Front : " <<q->front->key ;
            cout<<"\nQueue Rare : " << q->rare->key ;


            break;
        case 2:
           deQueue(q);
            break;
        case 3:
            display();
            break;
        case 4:
            break;
        default:
            printf("\nEnter valid option\n");
        }
        if(choice == 4)
        {
            exit(0);
            break;
        }
    }

}
