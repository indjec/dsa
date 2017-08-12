#include <stdio.h>
#define MAXSIZE 4
int a[MAXSIZE];
int rear = -1, front = -1;
int i, j, n, k;
void enqueue(int y)
{
    if (rear == MAXSIZE - 1)
        printf("Queue is full\n");
    else
        a[++rear] = y;
        if(front == -1)
        front++;
}
void dequeue(){
    if(rear ==-1 && front==-1)
    printf("Queue is empty.\n");
    else if(front == rear){
    front=-1;
    rear=-1;
    }
    else
    front++;
}
void print()
{
    printf("Queue is: ");
    for (i = 0; i <= rear; i++)
        printf("%d  ", a[i]);
    printf("\n");
}
int main()
{
    enqueue(10);
    print();
    enqueue(17);
    print();
    enqueue(20);
    print();
    dequeue();
    print();
    dequeue();
    print();
    return 0;
}