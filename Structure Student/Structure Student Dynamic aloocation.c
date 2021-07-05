#include<Stdio.h>
#include<conio.h>

struct student
{
    char name[20];
    int id;
    float cgpa;
} ;
//struct student stu[10];
struct student *p;
int main()
{

    int i, n;

    printf("Enter the student number: ");
    scanf("%d", &n);
    printf("Enter the student information:\n ");
    p = (struct student*) malloc (n*sizeof(int));

    if(p == NULL)
    {
        printf("The memory not allocated!");
    }
    else
    {
        for(i=0 ; i<n ; i++)
        {
            printf("\nEnter the student name: ");
            // scanf ("%s", stu[i].name);
            scanf ("%s", p[i].name);
            printf("Enter the id:  ");
            // scanf("%d", &stu[i].id);
            scanf("%d", &p[i].id);
            printf("Enter the CGPA: ");
            // scanf("%f", &stu[i].cgpa);
            scanf("%f", &p[i].cgpa);
            printf("\n");
        }
        printf("\nDisplaying information: ");
        for(i=0 ; i<n ; i++)
        {
            printf("\nthe %d student name : ", i+1);
            //puts(stu[i].name);
            puts(p[i].name);
            printf("the %d student id: ", i+1);
            //printf("%d", stu[i].id);
            printf("%d", p[i].id);
            printf("\nthe %d student CGPA: ", i+1);
            // printf("%.2f", stu[i].cgpa);
            printf("%f", p[i].cgpa);
            printf("\n");
        }

    }
    float max = p[0].cgpa;
    int temp;
    for(i=0 ; i<n ; i++)
    {

        if( max <=  p[i].cgpa  )
        {
            max = p[i].cgpa;
            temp = i;
        }

    }
    printf("The highest CGPA : ");
    printf("%f\t", max);
//printf("\n%s", p[temp].name);
    puts(p[temp].name);

    getch();
}



