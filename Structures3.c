#include <stdio.h>
#include <string.h>
struct inform
	{
		char name[5][20];
		int account;
		int balance;
	}s[5];
void check(struct inform *p, int cost)
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
	int i,cost;
	char name[5][20] = {"Etash","Jeevan","Kashish","Varun","PP"};
	int account[5] = {1001,1002,1003,1004,1005};
	int balance[5] = {490,620,150,500,360};
	
	for(i=0;i<5;i++)
	{
		strcpy(*s[i].name, name[i]);
		s[i].account = account[i];
		s[i].balance = balance[i];	
	}
	
	printf("\nEnter the cost: ");
	scanf("%d",&cost);
	printf("\n");
	
	check(&s[0],cost);
	
	return 0;
}