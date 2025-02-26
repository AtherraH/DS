#include<stdio.h>
void push();
void pop();
void display();
int stack[50],n,i,item,top=-1;
void main()
{
    int choice=0;
    printf("Enter the size of the stack: ");
    scanf("%d",&n);
    while (choice!=4) {
        printf("\nChoose required operation: 1.Push \t2.Pop \t3.Display \t4.Exit - ");
        scanf("%d",&choice);
        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("\nExited from Program");
                break;
            default:
                printf("\nInvalid Input");
        }
    }
}
void push() {
    if (top==(n-1))
        printf("\nOverflow Error!");
    else {
        printf("\nEnter element to be pushed: ");
        scanf("%d",&item);
        top++;
        stack[top]=item;
    }
}
void pop() {
    if (top==-1)
        printf("\nUnderflow Error!");
    else {
        printf("\nPopped item is %d",stack[top]);
        top--;
    }
}
void display() {
    if (top==-1)
        printf("\nStack is Empty!");
    else {
        printf("\nGiven stack is:");
        for (i=top; i>=0; i--) {
            printf("\n%d",stack[i]);
        }
    }
}
