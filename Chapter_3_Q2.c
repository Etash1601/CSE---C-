#include <stdio.h>
#include <conio.h>
int main()
{
	int age1,age2,age3;
	printf("Enter age of Ram: ");
	scanf("%d",&age1);
	printf("Enter age of Shyam: ");
	scanf("%d",&age2);
	printf("Enter age of Ajay: ");
	scanf("%d",&age3);
	if(age1<=age2&&age1<=age3)                   // [if] other than [if-else] so that if two 
	printf("Ram is the youngest of three \n");   // ages are same then it can print both the
	if(age2<=age1&&age2<=age3)                   // ages as youngest which will not happen 
	printf("Shyam is the youngest of three \n"); // in [if-else]
	if(age3<=age1&&age3<=age2)
	printf("Ajay is the youngest of three \n");
	return 0;
}