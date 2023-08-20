#include <stdio.h>
#include<string.h>
//#define N 5;
char stack[5];
int top = -1;

void push()
{
	char x;
	printf("Enter the character: ");
	scanf("%s",&x);
	if(top==4)
		printf("Overflow\n");
	else
	{
		top++;
		stack[top] = x;
	}
}
void pop()
{
	int item;
	if(top==-1)
		printf("Underflow\n");
	else
	{
		item = stack[top];
		top--;
		printf("Deleted item is %c\n",item);
	}
}
void peek()
{
	if(top==-1)
		printf("Stack is empty\n");
	else
		printf("Top item = %c\n",stack[top]);
}
void display()
{
	int i;
		if(top==-1)
		printf("First enter the caharcter");
		else
	for(i=top;i>=0;i--)
		printf("%c ",stack[i]);
	printf("\n");
}
int main()
{
	int ch;
	do
	{
		printf("Enter a choice - 1.push, 2.pop, 3.peek, 4.display, 0.stop : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				peek();
				break;
			case 4:
				display();
				break;
			default:
				printf("Invalid Choice\n");
		}
	}while(ch!=0);
	return 0;
}
