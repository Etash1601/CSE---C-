#include <stdio.h>
#include <string.h>

struct inform
	{
		char name[20];
		int account;
		int balance;
	}s[5];
	
void check(struct inform p[], int cost)
{
	int i;
	for(i=0;i<5;i++)
	{
		if(p[i].balance < cost)
		{
			printf("Name           : %s\n",p[i].name);
			printf("Account Number : %d\n",p[i].account);
            printf("Balance        : %d\n",p[i].balance);
            printf("--------------------------------\n");
		}
	}
}
int main()
{
	int i,cost;printf("Enter the details:\n");
	for(i=0;i<5;i++)
	{
		scanf("%s %d %d",&s[i].name,&s[i].account,&s[i].balance);
	}
	printf("\nEnter the cost: ");
	scanf("%d",&cost);
	printf("\n");
	
	check(s,cost);
	
	return 0;
}