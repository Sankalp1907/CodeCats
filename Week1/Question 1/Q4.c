#include <stdio.h>
#include <conio.h>
int main()
{
    int year;
    scanf("%d",&year);
    if(year%400==0)
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not a Leap Year");
    }
    return 0;
}
