#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
int num,rem,oct=0,i=0;
	printf("\nEnter an integer: ");
	scanf("%d",&num);
    /*printf("Octal Equivalent = %o\n",num);
    printf("Hexadecimal Equivalent = %x\n",num);*/
    while(num!=0)
    {
        rem = num % 8;
        oct = oct + rem*pow(10,i);  // for i=0, 10^0=1 which places 1st remainder to decimal place
        num = num / 8;              // for i=1, 10^1=10 places 2nd remainder to tenth place
        i++;                        // for i=2, 10^2=100 places 3rd remainder to hundredth place and so on
    }                               // Ex: 300 --->  1st oct = 4
    printf("Octal Value = %d",oct); //               2nd oct = 4+50 = 54
    return 0;                       //               3rd oct = 54+400 = [454]
}