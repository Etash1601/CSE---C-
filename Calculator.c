#include <stdio.h>
#include <conio.h>
int main()
{
	float x,y;
	int z;
	printf("Enter two numbers: ");
	scanf("%f%f",&x,&y);
	printf("x=%f\ny=%f\n",x,y);
	printf("\nChoose an option:-\n");
	printf("1}Add integers\n2}Subtract integers\n3}Multiply integers\n4}Divide integers\n\n");
	scanf("%d",&z);
	switch(z)
	{
	    case 1:
	        printf("Addition = %f\n",x+y);
            break;

        case 2:
            printf("Subtraction = %f\n",x-y);
	        break;
        case 3:
            printf("Multiplication = %f\n",x*y);
            break;
        case 4:
            printf("Division = %f\n",x/y);
            break;
    default:
       printf("Invalid input!\nLet me help you!!!\n");
       printf("\nIf Addition = %f\n",x+y);
       printf("If Subtraction = %f\n",x-y);
       printf("If Multiplication = %f\n",x*y);
       printf("If Division = %f\n",x/y);
   }
    printf("\n\nPress 1 to calculate again OR any other number to exit:  ");
    scanf("%d",&z);
    if(z==1)
        main();
    return 0;
}