#include <stdio.h>
#include <conio.h>
int main()
{
	int age;
	float height,weight;
	char mob[12],reg[10],name[20],gender,address[20];
	
	printf("Enter your details below:\n");
	printf("Name: ");
	gets(name);
	printf("Registration No: ");
	scanf("%s",&reg);
	printf("Gender(M/F/O): ");
	scanf("%s",&gender);
	printf("Height(feet): ");
	scanf("%f",&height);
	printf("Weight(Kg): ");
	scanf("%f",&weight);
	printf("Age: ");
	scanf("%d",&age);
	printf("Address: ");
	fgets(address,20,stdin);
	printf("Mobile No: ");
	fgets(mob,12,stdin);
	
	printf("\nEntered Details are: \n");
	printf("Name: %s\n",name);
	printf("Registraion No: %s\n",reg);
	
	if(gender=='m' || gender=='M')
		printf("Gender: Male\n");
	else if(gender=='f' || gender=='F')
		printf("Gender: Female\n");
	else if(gender=='o' || gender=='O')
		printf("Gender: Others\n");
	else
		printf("Gender: Invalid Choice\n");
	
	printf("Height: %f\n",height);
	printf("Weight: %f kg\n",weight);
	printf("Age: %d\n",age);
	printf("Address: %s\n",address);
	printf("Mobile No: %s\n",mob);
	return 0;
}