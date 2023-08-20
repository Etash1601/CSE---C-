#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	int i;
	float x[10],y[10],d1=0,d2;
	for(i=0;i<10;i++)
	{
		printf("Enter x%d and y%d = ",i+1,i+1);
		scanf("%f %f",&x[i],&y[i]);
	}
	for(i=0;i<9;i++)
	{
		d1 = d1 + sqrt(pow((x[i+1] - x[i]),2) + pow((y[i+1] - y[i]),2));
	}
	printf("\nDistance by adding consecutive points = %f\n",d1);
	d2 = sqrt(pow((x[9] - x[0]),2) + pow((y[9] - y[0]),2));
	printf("Distance between first and last point = %f",d2);
	return 0;
}