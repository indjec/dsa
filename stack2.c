#include <stdio.h>
#define MAXSIZE 4
int a[MAXSIZE];
int top1 = -1;
int top2 = MAXSIZE;
int num1, num2, choice;
void push1(int x)
{
    if (top1 == MAXSIZE - 1)
        printf("Stack 1 is full,can't push more elements.\n");
    else if (top1 == top2 - 1)
        printf("Stack 1 is full,can't push more elements.\n");
    else
        a[++top1] = x;
    // else
}
void push2(int y)
{
    if (top2 == 0)
        printf("Stack  is full,can't push more elements.\n");
    else if (top2 == top1 + 1)
        printf("Stack 2 is full,can't push more elements.\n");
    else
        a[--top2] = y;
    // else
}
void pop1()
{
    if (top1 == -1)
        printf("Stack 1 is empty.\n");
    else
        top1--;
    printf("Element successfully poped from Stack 1.\n");
}
void pop2()
{
    if (top2 == MAXSIZE)
        printf("Stack 2 is empty.\n");
    else
        top2++;
    printf("Element successfully poped from Stack 2.\n");
}
void high1()
{
    if (top1 == -1)
        printf("Stack 1 is empty.\n");
    else
        printf("Top of Stack 1 is:%d", a[top1]);
}
void high2()
{
    if (top2 == MAXSIZE)
        printf("Stack 2 is empty.\n");
    else
        printf("Top of Stack 2 is:%d", a[top2]);
}
void print1()
{
    printf("Stack 1: ");
    for (int i = 0; i <= top1; i++)
        printf("%d  ", a[i]);
    printf("\n");
}
void print2()
{
    printf("Stack 2: ");
    for (int i = MAXSIZE - 1; i >= top2; i--)
        printf("%d  ", a[i]);
    printf("\n");
}
int main()
{
    while (1)
    {
        printf("\n---------------------MENU--------------------\n");
        printf("Enter the operation to perform:\n");
        printf("1.Push into stack 1. \n2.Push into stack 2. \n3.Print stack 1. \n4.Print stack 2.\n5.Pop from stack 1. \n6.Pop from stack 2. \n7.Top of Stack 1. \n8.Top of Stack 2. \n9.Exit \n");
        printf("---------------------------------------------\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the element to push:");
            scanf("%d", &num1);
            push1(num1);
            break;
        case 2:
            printf("Enter the element to push:");
            scanf("%d", &num2);
            push2(num2);
            break;
        case 3:
            print1();
            break;
        case 4:
            print2();
            break;
        case 5:
            pop1();
            break;
        case 6:
            pop2();
            break;
        case 7:
            high1();
            break;
        case 8:
            high2();
            break;
        case 9:
            break;
        default:
            printf("Enter valid operation.\n");
        }
    }
    // push1(20);
    // print1();
    // push1(30);
    // print1();
    // push1(40);
    // print1();
    // push2(99);
    // print2();
    // push2(88);
    // print2();
    // push2(77);
    // print2();
}
