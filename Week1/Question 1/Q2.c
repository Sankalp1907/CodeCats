#include <stdio.h>
#include <conio.h>
int main()
{
    int num1,num2,maximum;
    scanf("%d",&num1);
    scanf("%d",&num2);
    maximum = (num1>num2)?num1:num2;
    printf("%d",maximum);
    return 0;
}

