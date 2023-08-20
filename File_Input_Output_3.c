#include <stdio.h>
#include <stdlib.h>
int main()
{
	char str [1000]; // array 
	FILE *ptr1;
	char fname [200] = "test.txt";  // creating a .txt file named test
	printf("Creating a file test.txt in C Program \n");
	ptr1 = fopen(fname,"w"); // calling fname (variable in which current created file is stored) to check 
                             // if it has any file or not
	if(ptr1==NULL)
	{
		printf("Error");
		exit(1);
	}
	printf("Input a sentence : ");
	fgets(str,sizeof str,stdin); // In fgets, we are passing stdin [standard input] to include the keyboard
                                 // but in fscanf, it happens automatically without trying to include keyboard.
                                 // And storing the input in str variable.
                                 // [sizeof] ensures that if entered sentence have exceeded the limited length
                                 // of array str.
	fprintf(ptr1,"%s",str);
	fclose(ptr1);
	printf("Text written successfully %s",fname);
}