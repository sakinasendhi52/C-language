// Gross Salary Calculator

#include<stdio.h>
#include<conio.h>

main(){
   int baseSalary, hra, da, ta, grossSalary;
   clrscr();

   printf("Enter Base Salary : ");
   scanf("%d",&baseSalary);

   printf("Enter HRA : ");
   scanf("%d",&hra);

   printf("Enter DA : ");
   scanf("%d",&da);

   printf("Enter TA : ");
   scanf("%d",&ta);

   grossSalary=baseSalary+hra+da+ta;
   printf("\n\nBase Salary = %d",baseSalary);
   printf("\nHRA = %d\%",hra);
   printf("\nDA = %d\%",da);
   printf("\nTA = %d\%",ta);
   printf("\nGross Salary : Rs %d",grossSalary);

   getch();
}