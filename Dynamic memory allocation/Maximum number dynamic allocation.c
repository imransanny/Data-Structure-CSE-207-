#include<stdio.h>
#include<stdlib.h>
int main()
{

    int i,n, *num;
    printf("Enter the total number: ");
    scanf("%d", &n);
    num = (int*)calloc (n, sizeof (int));
    if(num == NULL)
    {
        printf("The memory not alocated");
        exit(0);
    }
    else
    {
        printf("The memory is successfully allocated!^_^\n");
    }
    printf("Enter the value: \n");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d", &num[i]);
    }

    for(i=0 ; i<n ; i++)
    {
        printf(" %d ", num[i]);
    }

    for(i=1 ; i<n; i++)
    {

        if(*num < *(num+i))
        {
            *num = *(num+i);
        }
    }
    printf("\nThe Largest number is: %d", *num);

}
