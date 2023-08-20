#include <stdio.h>
#include <math.h>
int main()
{
	float deg,rad;
	printf("Enter Angle in Degrees: ");
	scanf("%f", &deg);
	rad = deg * (3.14159/180.0);
	printf("sin(%f) = %f\n",deg, sin(rad));
	printf("cos(%f) = %f\n",deg, cos(rad));
	printf("tan(%f) = %f\n",deg, tan(rad));
	printf("cot(%f) = %f\n",deg, 1/tan(rad));
	printf("sec(%f) = %f\n",deg, 1/cos(rad));
	printf("cosec(%f) = %f\n",deg, 1/sin(rad));
	return 0;
}
