#include<stdio.h>
#include<conio.h>
void main()
{
    float physics,chemistry,biology,mathematics,computer;
    float percentage;
    char Grade;
    scanf("%f",&physics);
    scanf("%f",&chemistry);
    scanf("%f",&mathematics);
    scanf("%f",&biology);
    scanf("%f",&computer);
    percentage = (physics+chemistry+mathematics+biology+computer)/5;
    if(percentage>=90)
    Grade='A';
    else if(percentage>=80)
    Grade='B';
    else if(percentage>=70)
    Grade='C';
    else if(percentage>=60)
    Grade='D';
    else if(percentage>=50)
    Grade='E';
    else if(percentage>=40)
    Grade='F';
    printf("%c",Grade);
}