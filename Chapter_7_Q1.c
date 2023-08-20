#include <stdio.h>
#include <conio.h>
int main()
{
	int grade,grace,failed;
	printf("\nEnter the class obtained by the student: ");
	scanf("%d",&grade);
	printf("Enter number of subjects in which the student failed: ");
	scanf("%d",&failed);
	switch (grade)
	{
		case 1:
			if(failed>3)
			grace=0;
			else
			grace=5;
			break;
		case 2:
			if(failed>2)
			grace=0;
			else
			grace=4;
			break;
		case 3:
			if(failed>1)
			grace=0;
			else
			grace=5;
			break;
		default:
			printf("You entered the wrong class of the student");
	}
	if(grade==1 || grade==2 || grade==3)
	printf("\nStudent has obtained a grace marks of %d marks per subjects\n",grace);
	return 0;
}
