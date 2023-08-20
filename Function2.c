#include <stdio.h>
#include <conio.h>
/*int myfunction(int x)
{
	return 5+x;
}
int main()
{
	printf("Result of this program is %d",myfunction(5));
	return 0;
}*/
int sum(int k)
{
	if(k>0)
    return k + sum(k-1); //here first k=10 and sum(k-1) becomes sum(9) 
    else               //and gets called again and again until k=0
    return 0; 
}
int main()
{
	int result=sum(10);
	printf("Display Result = %d",result);
	return 0;
}
