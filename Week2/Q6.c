#include<stdio.h>
void main()
{
    int num;
    scanf("%d",&num);
    int power;
    int f=1;
    scanf("%d",&power);
    int y=num;
    for(int i=1;i<=power;i++)
    {
        f=f*num;
    }
    printf("%d",f);
}