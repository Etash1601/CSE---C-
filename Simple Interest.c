#include<stdio.h>
int main()
{
	int P_A = 500; // initialisation with value declaration
	float R_I = 2.5;
	int time = 3;
	float S_I;
	S_I = P_A*R_I*time/100;
	printf("Simple Interest : %f", S_I);
	return 0;  
}
