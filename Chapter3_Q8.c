#include <stdio.h>
int main()
{
	float x,y;
	printf("Enter a point (x,y): ");
	scanf("%f %f",&x,&y);
	if(x==0&&y==0)
	printf("Given point lies on origin");
	else if(y==0)
	printf("Given point lies on x-axis");
	else if(x==0)
	printf("Given point lies on y-axis");
	else
	printf("Given point lies on x-y axis");
	return 0;
}
