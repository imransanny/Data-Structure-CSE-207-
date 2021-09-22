#include<iostream>
using namespace std;

#define size 5
int q1[size],q2[size],f1=-1,r1=-1,f2=-1,r2=-1;
void enq(int q[],int *f,int *r,int val)
{
    if(*r == size-1)
    {
        printf("queue is full");
    }
    else if(*f == -1 && *r == -1)
    {
        *f=*r=0;
    }
    else
    {
        *r=*r+1;
    }

    q[*r]=val;
}

void display(int q[],int *f, int *r)
{
    int i;
    if(*f == -1)
        printf("queue is empty ");
    else
    {
        for(i=*f; i<=*r; i++)
            printf("%d\t",q[i]);
    }
}

int main()
{
    int i,val;
    printf("\n Enter a value: \n");
    for(i=0; i<size; i++)
    {
        scanf("%d",&val);
        enq(q1,&f1,&r1,val);
    }
    printf("\nmain elements in queue 1 are\n");
    display(q1,&f1,&r1);

    for(i=f1; i<=r1; i++)
    {
        enq(q2,&f2,&r2,q1[i]);
    }
    printf("\ncopy another elements in queue 2 are\n");
    display(q2,&f2,&r2);

}
