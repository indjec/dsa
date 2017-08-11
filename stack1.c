#include <stdio.h>
#define MAXSIZE 100
int a[MAXSIZE];
int top = -1;
int i,n,j,k;
void push(int x)
{
    if (top == MAXSIZE - 1)
    {
        printf("Stack is full");
    }
    else
    a[++top] = x;  //first inceases top to 0 and then assign value to the stack
}
void pop()
{
    if (top == -1)
    {
        printf("Underflow.\n");
    }
    else
    top--;
}
void high(){
    if(top == -1){
        printf("Underflow\n");
    }
    else
    printf("Top element is :  %d", a[top]);
}
void print()
{
    int i;
    printf("Stack: ");
    for (i = 0; i <= top; i++)
    {
        printf("%d  ", a[i]);
    }
    printf("\n");
}
int main()
{
    int a,n,cont,p;
    printf("How many input you want to make: ");
    scanf("%d", &n);
    do{
    printf("Enter the element to push: ");
    scanf("%d", &a);
    push(a);
    print(); 
    i++;
    }
    while(i != n);
    
    printf("Do you wan to pop elements:(press 1 to continue)");
    scanf("%d", &cont);
    printf("How many elements you want to pop \n");
    scanf("%d", &p);
    if(cont == 1){
        do{
        pop();      
        j++;
        }while(j!=p);
        print();
    }
}