#include<stdio.h>
void main()
{
    int num;
    scanf("%d",&num);
    int sum=0;
    int y=num;
    while (y!=0)
    {
        int a=y%10;
        sum=sum+(a*a*a);
        y=y/10;
    }
    if(num==sum)
    {
        printf("%d is an Armstrong Number",num);
    }
    else
    {
        printf("Not an Armstrong number");
    }
    
}