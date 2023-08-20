#include <stdio.h>
#include<stdlib.h>
int n;
struct stack
{
    int top;
    int stack[10];
}st;
void push()
{
    int val;
    if(st.top==n)
    printf("\n overflow");
    else
    {
        printf("enter the number:");
        scanf("%d",&val);
        st.top=st.top+1;
        st.stack[st.top]=val;
    }
}
void pop()
{
    int item;
    if(st.top==-1)
    printf("\nUnderflow\n");
    else
    {
        item=st.stack[st.top];
        st.top=st.top-1;
    }
    printf("Deleted item is %d \n",item);
}
void display()
{
    int i;
    if(st.top==-1)
    printf("\nUnderflow\n");
    else
    for(i=st.top;i>=0;i--)
    {
        printf("%d\n",st.stack[i]);
    }
}
void main()
{
    int choice=0;
    st.top=-1;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    do
    {
        printf("\nchoose your opinion\n");
        printf("1.push\n2.pop\n3.Display\n4.Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:display();
            break;
            case 4:exit;
            default:
            {
                printf("Enter the valid input\n");
            }
        }
    }while(n!=0);
}
