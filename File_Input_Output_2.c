#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num;
    FILE *ptr1;
	if((ptr1 = fopen("D:\\ashish.txt","r"))==NULL)
	{
		printf("Error");
		exit(1);
	}
	fscanf(ptr1,"%d",&num);
	printf("Value n = %d",num);
	fclose(ptr1);
	// since there are exit and close (termination points) so we dont need to return 0
}