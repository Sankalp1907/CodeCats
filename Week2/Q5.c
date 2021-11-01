#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int reverse=0;
    int y=n;
    while (y!=0)
    {
        int a=y%10;
        reverse=reverse*10+a;
        y=y/10;
    }
    printf("The number in reverse order is :%d",reverse);
}