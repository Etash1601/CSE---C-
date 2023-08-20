#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node * next;
};

void transversal(struct Node * ptr)
{
	while(ptr!=NULL)
	{
		printf("%d ", ptr->data)
		ptr = ptr->next;
	}
}

int main()
{
	struct Node * head;
	struct Node * second;
	struct Node * third;
	
	// Allocate memory for nodes in the linked list
	head = (struct Node *)malloc(sizeof(struct Node));
	second = (struct Node *)malloc(sizeof(struct Node));
	third = (struct Node *)malloc(sizeof(struct Node));
	
	// Link first and second node
	head->data = 7;
	head->next = second;
	
	// Link second and third node
	head->data = 11;
	head->next = third;
	
	// Link third and fourth node
	head->data = 66;
	head->next = NULL;
	
	transversal(head);
	return 0;
}
