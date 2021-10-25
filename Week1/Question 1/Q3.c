#include <stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int num1,num2,num3,maximum;
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);
    maximum = fmax(num1,fmax(num2,num3));
    printf("Maximum number: %d",maximum);
    return 0;
}