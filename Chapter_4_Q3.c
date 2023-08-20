// A certain grade of steel is graded according to the following conditions:

// 1. Hardness must be greater than 50
// 2. Carbon content must be less than 0.7
// 3. Tensile strength must be greater than 5600
// The grades are as follows:
// Grade is 10 if all three conditions are met
// Grade is 9 if conditions (i) and (ii) are met
// Grade is 8 if conditions (ii) and (iii) are met
// Grade is 7 if conditions (i) and (iii) are met
// Grade is 6 if and only one conditions is met
// Grade is 5 is none of the conditions are met

#include <stdio.h>
#include <conio.h>
int main()
{
    float hd,cc,ts;
    int hd1 = 0; // for checking the conditions, So when value is 0 then it is false and 1 when it is true
    int cc1 = 0;
    int ts1 = 0;
    int grade;
    printf("Enter Hardness : ");
    scanf("%f",&hd);
    printf("Enter Carbon Content : ");
    scanf("%f",&cc);
    printf("Enter Tensile Strength Grades : ");
    scanf("%f",&ts);
    if(hd>50) // for easy calculation of all three conditions and grades
    hd1 = 1;
    if(cc<0.7)
    cc1 = 1;
    if(ts>5600)
    ts1 = 1;
    
    if(hd1==0 && cc1==0 && ts1==0) // none of the conditions are true
    grade = 5;
    if(hd1==1 || cc1==1 || ts1==1) // only one condition is true
    grade = 6;
    if(hd1==1 && cc1==0 && ts1==1) // 1st and 3rd conditions are true
    grade = 7;
    if(hd1==0 && cc1==1 && ts1==1) // 2nd and 3rd conditions are true
    grade = 8;
    if(hd1==1 && cc1==1 && ts1==0) // 1st and 2nd conditions are true
    grade = 9;
    if(hd1==1 && cc1==1 && ts1==1) // all three conditions are met
    grade = 10;
    printf("\nThe grade of steel is = %d",grade);
    return 0;
}