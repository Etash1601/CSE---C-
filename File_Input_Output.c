#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num;
	FILE *ptr1; // Here, FILE is like a data type of pointer ptr1
	ptr1 = fopen("D:\\ashish.txt","w"); // At pointer's address, funtion to open & write on file is passed
	    // [D:\\ashish.txt] is location and [w] is permission to write       
	if(ptr1==NULL) // if no file exists at [D:\\ashish.txt] location then null stores at ptr1 
	{
	    printf("Error");
	    exit(1);
    }
    printf("Enter a number : "); // we enter what we want to write
    scanf("%d",&num);
    
    fprintf(ptr1, "%d", num); // we pass what we want to write at location ptr
    fclose(ptr1); // this function closes the file 
    return 0;
}