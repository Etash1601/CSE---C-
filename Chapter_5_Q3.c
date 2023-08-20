#include <stdio.h>
int main()
{
    int m=21,p,c;  // p is person's choice and c is computer's choice
    
    while(1)  // since 1 is always true then this loop runs for infinity until we break it
    {
        printf("\nNumber of matches left = %d \n",m);
        printf("Pick 1,2,3 or 4 matches: ");
        scanf("%d",&p);

        if(p>4 || p<1)
        continue; // it stops the further process and user has to pick up a number again if they picked a wrong number
        
        m = m - p;
        printf("Number of matches left = %d\n",m);

        c = 5 - p;
        printf("Out of which computer picked %d\n",c);
        m = m - c;
        
        if(m==1)
        {
            printf("Number of matches left is 1\n");
            printf("\nYou lost the game");
            break;  // it breaks the while loop
        }
    }
    return 0;
}