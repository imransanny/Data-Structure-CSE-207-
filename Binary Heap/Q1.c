#include<stdio.h>
#define arraysize 100

int heap[arraysize];

int size =0;

void insertHeap (int item)
{
    if(size == arraysize)
    {
        printf("overloadded");
    }
    else
    {


        int parent = (size -1)/2;
        heap [size] = item;
        int i = size;

        while(i !=0  && heap [parent]< heap[i])
        {
            int b= heap [i];
            heap [i] = heap [parent];
            heap [parent ] = b;
            i = (i-1)/2;
            parent = (i-1)/2;
        }
        size++;
    }

}


void printHeap()
{
    int i;
    for(i=0; i< size ; i++)
    {
        printf(" %d ", heap[i]);
    }
    printf("\n");

}


void deleteMax()
{
    if(size !=0)
    {
        printf("delete value %d\n", heap[0]);
        heap[0] = heap[size-1];
        size--;
        reheapDown(0, size);
    }else{
       printf("The Tree is Empty");
    }

}

void reheapDown(int posi, int lastposi)
{
    int left = 2*posi +1;

    int right = 2*posi +2;

    int largest = posi;

    if(left <= lastposi && heap[largest]<heap [left])
    {
        largest = left;
    }

    if(right <= lastposi && heap[largest]<heap [right])
    {
        largest = right;
    }

    if(largest != posi)
    {

        int swap = heap[posi];

        heap [largest] = heap [posi];
        heap[posi] = swap;

        reheapDown(largest, lastposi);
    }
}


void heapsort(int lastposi ){

   int i, temp;

   for(i=lastposi/2-1; i>=0; i--){
    reheapDown(i, lastposi);
   }
   for (i= lastposi-1 ; i>=0; i--){
    temp = heap[0];
    heap[0] = heap[i];
    heap[i] = temp;
    reheapDown(i, 0);
   }

}



int main()
{

    while (1)
    {


        printf(" Max Heap :\n");
        printf("1. heap insertion\n");
        printf("2. print heap \n");
        printf("3. Delete Max heap\n");
        printf("4. break\n");
        printf("\n");

        int n;

        printf("Enter the choose option: ");
        scanf("%d", &n);

        if(n==1)
        {

            int x;
            printf("Enter the insert value: ");
            scanf("%d", &x);
            insertHeap(x);
        }
        else if(n==2)
        {

            printHeap();
        }

        else if( n==3 )
        {
            deleteMax();

        }
        else if(n==4)
        {
            break;
        }else if(n==5){
         heapsort();
        break;
        }
    }
}





