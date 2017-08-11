#include <stdio.h>
void push();
int main()
{
    int top=-1;
    int maxsize=5;
    int a[maxsize], n, i,item;
    // printf("Enter the number of elements: ");
    // scanf("%d", &n);
    for (i = 0; i < maxsize; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < maxsize; i++)
    {
        printf("%d  ", a[i]);
        printf("\n");
    }
    if(top == maxsize-1)
    printf("Stack is full");
    else{
        printf("Enter the element to insert: ");
        scanf("%d", &item);
        top=top+1;
        a[top]=item;
        for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
    }
}