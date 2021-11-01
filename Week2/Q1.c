#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int sum=0;
    printf("The first 7 natural number is :/n");
    for(int i=1;i<=n;i++)
    {
        printf("%d\t",i);
        sum=sum+i;
    }
    printf("\nThe Sum of Natural Number upto 7 terms :%d",sum);
}