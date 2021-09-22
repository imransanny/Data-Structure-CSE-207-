#include <stdio.h>
#define size 100
char q[size],f=-1,r=-1;

void enque(char val)
{
    if(r == size-1)
        printf("queue is full");
    else if(f == -1 && r == -1)
        f=r=0;
    else
        r=r+1;
    q[r]=val;
}
char deque()
{
    char val;
    if(f == -1)
        printf("queue is empty ");
    else
    {
        val = q[f];
        if(f == r)
            f=r=-1;
        else
            f=f+1;
    }
    return val;
}
int main()
{
    int i;
    char s[size]=   "we are the students of CSE";
    /*
    printf(" Enter the input any string:\n");
     gets(s);
*/

    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i] != ' ')
            enque(s[i]);
    }
    for(i= f; i<=r; i++)
        s[i]=deque();
    s[i]='\0';
    printf("Delete All space: " );
    puts(s);

}
