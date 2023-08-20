#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	int i;
	float a[6],b[6],angle[6],area[6];
	for(i=0;i<6;i++)
	{
		printf("Enter sides of traingle and angle %d = ",i+1);
		scanf("%f %f %f",&a[i],&b[i],&angle[i]);
	}
	for(i=0;i<6;i++)
	{
		area[i] = 0.5 * a[i] * b[i] * sin(angle[i]);
	}
	for(i=0;i<6;i++)
	{
		printf("\nArea of traingle %d = %f",i+1,area[i]);
	}
	return 0;
}