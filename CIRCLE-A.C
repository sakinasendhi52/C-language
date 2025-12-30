#include<stdio.h>
#include<conio.h>
#define PI 3.14

main(){

   float radius,area;
   clrscr();

   printf("Enter the radius :");
   scanf("%f",&radius);
   area=PI*radius*radius;
   printf("\n\nRADIUS : %.2f",radius);
   printf("\nAREA OF CIRCLE : %.3f",area);

   getch();

}