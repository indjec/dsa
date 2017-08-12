#include <stdio.h>
#include <stdlib.h>
int a[20];
int m, n, p, val, i, j, key, pos, temp;
void create();
void display();
void insert();
void del_end();
void insert_end();
void del();
int main()
{
    int choice;
    do
    {
        printf("\n\n--------Menu-----------\n");
        printf("1.Create\n");
        printf("2.Display\n");
        printf("3.Insert\n");
        printf("4.Delete\n");
        printf("5.Delete from end.\n");
        printf("6.Insert at end.\n");
        printf("7.Exit\n");
        printf("-----------------------");
        printf("\nEnter your choice:\t");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            insert();
            break;

        case 4:
            del();
            break;
        case 5:
            del_end();
            break;
        case 6:
            insert_end();
            break;
        case 7:
            break;
        default:
            printf("\nInvalid choice:\n");
            break;
        }
    } while (choice != 7);
    return 0;
}
void create()
{
    printf("Enter the number of elements to enter: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}
void display()
{
    printf("Array is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
}
void insert()
{
    printf("Enter the posotion to enter: ");
    scanf("%d", &pos);
    printf("Enter the value to enter: ");
    scanf("%d", &val);
    for (i = n - 1; i >= pos - 1; i--)
    {
        a[i + 1] = a[i];
    }
    a[pos - 1] = val;
    n++;
}
void del()
{
    printf("Enter the posotion to enter: ");
    scanf("%d", &pos);
    for (i = pos; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
}
void insert_end()
{
    printf("Enter the value to enter: ");
    scanf("%d", &key);
    n++;
    a[i] = key;
}
void del_end()
{
    n--;
    a[i] = a[i + 1];
    printf("Element deleted from end.\n");
}