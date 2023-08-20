#include <stdio.h>
#include <conio.h>
#include <math.h>
int non_rec_bin(int num);
int rec_bin(int num);
int main()
{
	int num;
	printf("Enter a decimal number: ");
	scanf("%d",&num);
	
	printf("Decimal to Binary using recursion: %d\n",rec_bin(num));
	printf("Decimal to Binary without using recursion: %d\n",non_rec_bin(num));
	return 0;
}
int non_rec_bin(int num)
{
	int rem,bin=0,i=0;
	while(num!=0)
	{
		rem = num%2;
		bin = bin + rem*pow(10,i);
		num = num/2;
		i++;
	}
	return (bin);
}
int rec_bin(int num)
{
	if(num==0)
		return 0;
    else
    	return ((num%2) + 10*rec_bin(num/2));
}
