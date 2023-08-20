#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	int n,i;
	float xysum, xsum, ysum, x2sum, y2sum;
	xysum = xsum = ysum = x2sum = y2sum = 0;
	
	printf("Enter numbers of terms = ");
	scanf("%d",&n);
	float x[n],y[n];
	for(i=0;i<n;i++)
	{
		printf("Enter x%d and y%d = ",i+1,i+1);
		scanf("%f %f",&x[i],&y[i]);
	}
	
	for(i=0;i<n;i++)
	{
		xysum = xysum + x[i]*y[i];
		xsum = xsum + x[i];
		ysum = ysum + y[i];
		x2sum = x2sum + x[i]*x[i];
		y2sum = y2sum + y[i]*y[i];
	}
	float r = (n*xysum - xsum*ysum) / (sqrt((n*x2sum - xsum*xsum)*(n*y2sum - ysum*ysum)));
	printf("Correlation Coefficient = %f",r);
	return 0;
}