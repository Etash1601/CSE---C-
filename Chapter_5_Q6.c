#include<stdio.h>
int main()
{
    int small, big, range, num, limit;
    printf("Enter the limit: ");
    scanf("%d", &limit);
    printf("Enter %d numbers:\n", limit);
    scanf("%d", &num);  // we take 1st no. before starting loop to give it to big and small for 
                        // comparing other numbers from each of them for every other time
    small = big = num;
    limit = limit - 1;  // since we already took 1st no. so we reduce limit by 1
  
    while(limit)  
    {  
        scanf("%d", &num);
        if(num > big)  
        big = num;  
        if(num < small)  
        small = num;
  
        limit--;  
    }

    range = big - small;
    printf("Smallest Number = %d\nBiggest Number = %d\n", small, big);
    printf("Range = %d\n",range);
    return 0;
}