#include <stdio.h>
#include <conio.h>

struct mystructure // definition or declaration
{
	int num;
	char letter;
};
int main()
{
	struct mystructure s1;
	s1.num=10;
	s1.letter='A';
	printf("Structure integer %d\n",s1.num);
	printf("Structure character %c\n",s1.letter);
	struct mystructure s2;
	s2.num=20;
	s2.letter='B';
	printf("\nStructure integer %d\n",s2.num);
	printf("Structure character %c\n",s2.letter);
	return 0;
}
