#include <stdio.h>

int main()
{
    int notes;
    int c;
    scanf("%d",&c);
    if((int)c/2000>0)
    {
        notes=c/2000;
        c = (int)c%2000;
        printf("2000 notes: %d\n",notes);
    }

    if((int)c/1000>0)
    {
        notes=c/1000;
        c = (int)c%1000;
        printf("1000 notes: %d\n",notes);
    }
    if((int)c/500>0)
    {
        notes=c/500;
        c = (int)c%500;
        printf("500 notes: %d\n",notes);
    }
    if((int)c/200>0)
    {
        notes=c/200;
        c = (int)c%200;
        printf("200 notes: %d\n",notes);
    }
    if((int)c/100>0)
    {
        notes=c/100;
        c = (int)c%100;
        printf("100 notes: %d\n",notes);
    }
    if((int)c/50>0)
    {
        notes=c/50;
        c = (int)c%50;
        printf("50 notes: %d\n",notes);
    }
    if((int)c/20>0)
    {
        notes=c/20;
        c = (int)c%20;
        printf("20 notes: %d\n",notes);
    }
    if((int)c/10>0)
    {
        notes=c/10;
        c = (int)c%10;
        printf("10 notes: %d\n",notes);
    }
    if((int)c/5>0)
    {
        notes=c/5;
        c = (int)c%5;
        printf("5 notes: %d\n",notes);
    }
    if((int)c/2>0)
    {
        notes=c/2;
        c = (int)c%2;
        printf("2 notes: %d\n",notes);
    }
    if((int)c/1>0)
    {
        notes=c/1;
        c = (int)c%1;
        printf("1 notes: %d\n",notes);
    }

    
    return 0;
}