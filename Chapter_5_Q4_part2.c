#include <stdio.h>
int main()
{
    int num,positive=0,negative=0,zero=0;
    int choice=1;
    do
    {
        printf("Enter a number: ");
        scanf("%d",&num);
        if(num>0)
        positive++;
        else if(num<0)
        negative++;
        else
        zero++;
        
        printf("\nDo you want to continue (1 for YES) and (0 for No): ");
        scanf("%d",&choice);
    }while(choice);
    printf("\nNumber of positive numbers = %d\n",positive);
    printf("Number of negative numbers = %d\n",negative);
    printf("Number of zeros = %d\n",zero);
    return 0;
}