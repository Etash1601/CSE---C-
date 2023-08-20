#include <stdio.h>
#include <conio.h>
int main()
{
    int num,limit;
    int positive=0;
    int negative=0;
    int zero=0;
    printf("\nEnter the limit: ");
    scanf("%d",&limit);
    printf("\nEnter the numbers:\n");
    while(limit)  //while starts with limit entered and ends when it becomes 0 which is false
    {
        scanf("%d",&num);
        if(num>0)
        positive++;
        else if(num<0)
        negative++;
        else
        zero++;
        limit--; // when limit reduces to 0 then while loop ends
    }
    printf("\nNumber of positive numbers = %d\n",positive);
    printf("Number of negative numbers = %d\n",negative);
    printf("Number of zeros = %d\n",zero);
    return 0;
}