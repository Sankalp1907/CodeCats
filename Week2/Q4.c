#include<stdio.h>
void main()
{
    int num;
    scanf("%d",&num);
    int c=0;
    for(int i=2;i<num;i++)
    {
        if(num%2==0)
        {
            c++;
        }
    }
    if(c==0)
    {
        printf("%d is a prime number",num);
    }
    else
    {
        printf("Not a prime number");
    }
}