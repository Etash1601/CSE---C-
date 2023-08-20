#include <stdio.h>
#include <conio.h>
int main()
{
    int year,stored_year,basic_year=1900,leap_year,normal_year,total_days,day;
    printf("Enter a year: ");
    scanf("%d",&year);
    stored_year = year;
    year = (year-1) - basic_year; // to calculate no. of years there from basic year till previous year
    leap_year = year/4;
    normal_year = year - leap_year;
    total_days = leap_year*366 + normal_year*365 + 1; // to calculate no. of days till the prevoius year
    day = total_days % 7; // to calculate no. of days left in 7-days week on 31st December of previous year
    if(day==0)
    printf("It is Monday on 01/01/%d",stored_year);
    else if(day==1)
    printf("It is Tuesday on 01/01/%d",stored_year);
    else if(day==2)
    printf("It is Wednesday on 01/01/%d",stored_year);
    else if(day==3)
    printf("It is Thursday on 01/01/%d",stored_year);
    else if(day==4)
    printf("It is Friday on 01/01/%d",stored_year);
    else if(day==5)
    printf("It is Saturday on 01/01/%d",stored_year);
    else if(day==6)
    printf("It is Sunday on 01/01/%d",stored_year);
    else
    printf("Wrong Year");
    return 0;
}
