#include <stdio.h>
#include <conio.h>
int main()
{
    int eng,phy,chem,math,pe,total;
    float result;
    printf("Enter English Marks: ");
    scanf("%d",&eng);
    printf("Enter Physics Marks: ");
    scanf("%d",&phy);
    printf("Enter Chemistry Marks: ");
    scanf("%d",&chem);
    printf("Enter Mathematics Marks: ");
    scanf("%d",&math);
    printf("Enter Physical Education Marks: ");
    scanf("%d",&pe);
    total = eng + phy + chem + math + pe;
    result = total/5;
    if(result>=90&&result<=100)
    {
        printf("Total Marks = %d out of 500 \n",total);
        printf("Grade A");
    }
    else if(result>=80&&result<=89)
    {
        printf("Total Marks = %d out of 500 \n",total);
        printf("Grade B");
    }
    else if(result>=70&&result<=79)
    {
        printf("Total Marks = %d out of 500 \n",total);
        printf("Grade C");
    }
    else if(result>=60&&result<=69)
    {
        printf("Total Marks = %d out of 500 \n",total);
        printf("Grade D");
    }
    else if(result>=50&&result<=59)
    {
        printf("Total Marks = %d out of 500 \n",total);
        printf("Grade E");
    }
    else if(result>=40&&result<=49)
    {
        printf("Total Marks = %d out of 500 \n",total);
        printf("Grade F");
    }
    else if(result>=30&&result<=39)
    {
        printf("Total Marks = %d out of 500 \n",total);
        printf("Grade G");
    }
    else
    {
        printf("Total Marks = %d out of 500 \n",total);
        printf("Grade - Fail");
    }
    return 0;
}
