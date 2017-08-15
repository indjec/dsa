#include <stdio.h>
int m = 5, n = 3;
int main()
{
    int student[m];
    int stu[n];
    int i, j;
    
    for (i = 0; i < m; i++)
    {
        printf("Enter details of student %d: ", i+1);
        for (j = 0; j < n; j++)
        {
            scanf("%d", &stu[j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        printf("Details of student %d:\n",i+1);
        for (j = 0; j < n; j++)
        {
            printf("%d", stu[j]);
        }
    }
}