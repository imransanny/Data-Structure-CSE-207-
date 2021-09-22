
#include<Stdio.h>
int MAXSIZE = 8;
int stack[8];
int Top = -1;

int isempty()
{

    if (Top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }


    int isfull()
    {
        if(Top == MAXSIZE)
        {
            return 1;
        }
        else
        {
            return 0;
        }

        int peek()
        {
            return stack[Top];
        }

        int pop()
        {
            int data;

            if (!isempty())
            {

                data = stack[Top];
                Top = Top -1;
                return data;

            }
            else
            {
                printf("could not retrieve data, stack is empty.\n");
            }
        }

        int push (int data)
        {
            if(isfull())
            {
                Top = Top +1;
                stack[Top] - data;
            }
            else
            {
                printf("could not insert data, stack is full . \n");
            }
        }

    }}


   int main(){
    int item, data;
    int choice;
    while(1)
    {

        printf("\n 1. push");
        printf("\n 2. pop");
        printf("\n 3. print stack top");
        printf("\n 4. exit");
        printf("\n.............................\n");
        printf("\nEnter your choice ");
        scanf("%d", &choice);

        switch(choice)
        {

        case 1:
            printf("Input item: ");
            scanf("%d", item);
            push(item);
            break;

        case 2:
            data = pop();
            printf("%d\n", data);
            break;

        case 3:
            printf(stack[Top]);
            break;
        case 4:
            break;
        }

    }
   }

