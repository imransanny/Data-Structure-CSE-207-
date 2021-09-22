#include<iostream>

using namespace std;

#define stack_max 100
typedef struct
{
    int top;
    int data [stack_max];
} Queue;

Queue *front , *rare;

void enqueue(Queue *s, int item){
    cout<< " "<<item;

    if(s->top <stack_max)
    {
        s->data[s->top] = item;
        s->top = s->top+1;
    }
    else
    {
        cout<<"stack is full!\n";
    }

}

int dequeue(Queue *s)
{
    int item;

    if(s->top == 0)
    {
        cout<<"Queue is empty\n";
        return -1;
    }
    else
    {
        s->top = s->top -1;
        item = s->data[s->top];
    }
    return item;
}


int main()
{
    Queue temp;
    int item;

    temp.top =0;

  cout<<"input data: " ;

    enqueue(&temp, 1);
    enqueue(&temp, 2);
    enqueue(&temp, 3);
    enqueue(&temp, 4);
    enqueue(&temp, 5);

    cout<<endl<<"output data" ;

    item = dequeue(&temp);
    cout<< " "<<item;


    item = dequeue(&temp);
    cout<< " "<<item;

    item = dequeue(&temp);
    cout<< " "<<item;

    item = dequeue(&temp);
    cout<< " "<<item;

    item = dequeue(&temp);
    cout<< " "<<item;
}
