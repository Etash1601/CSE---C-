#include <stdio.h>
#include <conio.h>
int main()
{
	int P_A;
	float R_I;
	int time;
	float S_I;
	printf("Enter Principal Amount, Rate of Interest and Time");
	scanf("%d%f%d",&P_A,&R_I,&time);
	S_I = P_A*R_I*time/100;
	printf("Simple Interest : %f", S_I);
	//return 0;
	clrscr();
	getch(); 
}
