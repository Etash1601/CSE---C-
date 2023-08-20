#include <stdio.h>
#include <conio.h>
int main()
{
	float kgs,gram,pound,ton;
	convert(&kgs,&gram,&pound,&ton);
	printf("%f kilograms is equivalent to:\n\n%f grams\n%f pounds\n%f tons",kgs,gram,pound,ton);
	return 0;
}
void convert(float*kgs,float*gram,float*pound,float*ton)
{
	float kg;
	printf("Enter weight in kilograms: ");
	scanf("%f",&kg);
	*kgs=kg;
	*gram=kg*1000;
	*pound=kg*2.205;
	*ton=kg/1000;
}
