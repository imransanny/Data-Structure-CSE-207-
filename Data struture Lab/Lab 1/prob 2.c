#include<stdio.h>

void sortarray(int n, int *p )
{
    int i, j, temp;
    for(i=0 ; i<n; i++)
    {
        for(j= 0 ; j<n-1; j++)
        {
            if(p[j] > p[j+1])
            {
                temp = p[j];
                p[j] = p[j+1];
                p[j+1] = temp;
            }
            /*
             if (*(p + j) > *(p + i)) {
             temp = *(p + i);
             *(p + i) = *(p + j);
              *(p + j) = temp;
             } */

        }
    }
    for(i=0 ; i<n ; i++)
    {
        printf(" %d ", p[i]);
    }

}

int main()
{

    int i, n, *p;
    printf("Enter the total number: ");
    scanf("%d", &n);
    printf("Enter the number: ");
//p = (int*)calloc (n, sizeof (int));
    for(i=0 ; i<n ; i++)
    {

        scanf("%d", &p[i]);
    }

    sortarray(n, p);

   /* for(i=0 ; i<n ; i++)
    {

        printf("\n%d", p[i]);
    }
    */
    return 0;
}
