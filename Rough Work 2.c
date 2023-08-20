#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num;
    FILE *ptr2;
	if((ptr2 = fopen("D:\\ashish.txt","r"))==NULL)
	{
		printf("Error");
		exit(1);
	}
	fscanf(ptr2,"%d",&num);
	printf("Value n = %d",num);
	fclose(ptr2);
	// since there are exit and close (termination points) so we dont need to return 0
}
