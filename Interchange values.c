#include <stdio.h>
int main()
{
	int c1,d1,c2,d2;
	printf("Enter value of C: ");
	scanf("%d", &c1);
	printf("Enter value of D: ");
	scanf("%d", &d1);
	d2 = c1;
	c2 = d1;
	printf("New value of C = %d \n",c2);
	printf("New value of D = %d \n",d2);
	return 0;
}
