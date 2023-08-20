#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *ptr1;
	ptr1 = fopen("Bihar.txt","w+");
	fputs("I live in Bihar",ptr1);
	fseek(ptr1, 7, SEEK_SET); // with seek_set, cursor excludes every character from 7th position in above line
                              // and overwriting starts from Katihar.
                              //  [I live Katihar is situated in near Nepal & West Bengal border]
	fputs("Katihar is situated in near Nepal & West Bengal border",ptr1);
	fclose(ptr1);
	return 0;
}

// fputs = write a line of string in a file
// fgets = read a line of string in a file
// fseek = moving to a specific location in a file

// w creates a new file or truncates existing file and then opens it for writing whereas w+ opens it for
// reading and writing both