#include <stdio.h>
#include <string.h>
//void check(struct inform p);
int main()
{
	struct inform
	{
		char name[20];
		int account;
		int balance;
	}s[5];
	int i,cost;
	
	/*struct inform s[0] = {"Etash",1001,2000};
	struct inform s[1] = {"Jeevan",1002,1052};
	struct inform s[2] = {"Kashish",1003,1200};
	struct inform s[3] = {"Varun",1004,1482};
	struct inform s[4] = {"PP",1005,1500};*/
	
	printf("Enter the details:\n");
	for(i=0;i<5;i++)
	{
		scanf("%s %d %d",&s[i].name,&s[i].account,&s[i].balance);
	}
	printf("\nEnter the cost: ");
	scanf("%d",&cost);
	printf("\n");
	for(i=0;i<5;i++)
	{
		if(s[i].balance < cost)
		{
			printf("%s %d %d\n",s[i].name,s[i].account,s[i].balance);
		}
	}
	return 0;
}
