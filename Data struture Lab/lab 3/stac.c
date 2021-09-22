
#include <stdlib.h>

int stack[100],choice,n,top,x,i;

void push()
{
    if(top>=n

-1)
    {
        printf("\nSTACK is over flow");
    }
    else
    {
        printf("\nEnter a value to be pushed: ");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\nStack is under flow");
    }
    else
    {
        printf("\nThe popped elements is %d",stack[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("\nThe elements in STACK: ");
        for(i=top; i>=0; i--)
            printf("%d ",stack[i]);
        printf("\nPress Next Choice");
    }
    else
    {
        printf("\nThe STACK is empty");
    }

}

int main()
{
    top=-1;
    printf("Enter the size of STACK[MAX=100]: ");
    scanf("%d",&n);
    printf("\nSTACK OPERATIONS");
    printf("\n----------------");
    printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
    while(choice!=4)
    {
        printf("\nEnter the Choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("\nEXIT POINT ");
                break;
            }
            default:
            {
                printf ("\nPlease Enter a Valid Choice");
            }

        }
    }
    return 0;
}


