#include<stdio.h>
void main()
{
    int num;
    scanf("%d",&num);
    int fact=1;
    for(int i=2;i<-num;i++)
    {
        fact=fact*i;
    }
    printf("The Factorial of %d is:%d",num,fact);
}