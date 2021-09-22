
#include<stdio.h>

int graph[40][40];

int node, edge;



void createGraph()
{
    printf("Enter number of nodes:  ");
    scanf("%d", & node);

    printf("Enter number of edge:  ");
    scanf("%d", & edge);

    int i;

    for(i=1; i<= edge; i++)
    {
        int x, y;
        printf("Enter the 2 end point of the edge:  ");
        scanf("%d%d", &x,&y);
        graph[x][y] = 1 ;
        graph [y][x] = 1;
    }

}

void displayGraph()
{

    int i, j;
    printf("Number of node %d\n", node);
    printf("Number of Edge %d\n\n", edge);

    for(i=1; i<= node ; i++)
    {

        for(j =1; j<=node ; j++)
        {
            printf("%d  ", graph[i][j]);
        }
        printf("\n");
    }
}

void addEdge()
{
    printf("Enter the Endpoint: ");
    int x, y;
    scanf("%d%d", &x, &y);

    if(x<= node && y<= node)
    {

        graph [x][y] = 1;
        graph[y] [x] =1;

    }
    edge++ ;

}

void addVertex( )
{

    printf("Enter the new vertex: ");
    int x;
    scanf("%d", &x);
    node++ ;
}

void deleteVertex()
{

    printf("Enter vertex");
    int x, i, j;
    scanf("%d", &x);
    if(x < node)
    {

        while(x<= node )
        {
            for(i= 0 ; i<= node ; ++i)
            {
                graph[i][x] = graph [i][x+1];
            }
            for(i=0 ; i<= node ; ++i)
            {

                graph[x][i] = graph [x+1][i];
            }
            x++;
        }
    }
    else
    {
        printf("Does not exit");
    }
    node++;
}

void deleteEdge()
{
    printf("Enter Endpoint: ");
    int x,y;
    scanf("%d%d", &x, &y);

    if(x<= node && y<= node)
    {

        graph [x][y] = 0;
        graph[y] [x] =0;
    }
    edge-- ;
}

int main()
{

    while(1)
    {

        printf("1. create graph\n");
        printf("2. Display graph\n");
        printf("3. Add Edge\n");
        printf("4. Add vertex\n");
        printf("5. Delete vertex\n");
        printf("6. Delete Edge\n");
        printf("7. Exit\n");


        int choice;
        printf("Enter the choice:  ");
        scanf("%d", &choice);
        if(choice==1)
        {
            createGraph();
        }
        else if(choice == 2)
        {
            displayGraph();
        }
        else if(choice == 3)
        {
            addEdge();
        }
        else if(choice==4)
        {
            addVertex();
        }
        else if(choice ==5)
        {
            deleteVertex();
        }
        else if(choice==6)
        {
            deleteEdge();
        }
        else if(choice==7)
        {
            break;
        }

    }
}

