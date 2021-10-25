#include<stdio.h>
#include<conio.h>
void main()
{
    float basic_salary;
    scanf("%d",&basic_salary);
     float HRA,DA,Gross_Salary;
     if(basic_salary<=10000);
     {
         HRA=0.2*basic_salary;
         DA=0.8*basic_salary;
         Gross_Salary=basic_salary-DA+HRA;
    }
    if(basic_salary<=20000);
     {
         HRA=0.25*basic_salary;
         DA=0.9*basic_salary;
         Gross_Salary=basic_salary-DA+HRA;
    }
    if(basic_salary<=30000);
     {
         HRA=0.3*basic_salary;
         DA=0.95*basic_salary;
         Gross_Salary=basic_salary-DA+HRA;
    }
    printf("%f",basic_salary);
}