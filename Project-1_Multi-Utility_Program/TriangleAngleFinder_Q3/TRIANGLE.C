// Triangle Angle Finder

#include<stdio.h>
#include<conio.h>

main(){
   int firstAngle, secondAngle, thirdAngle;

   clrscr();

   printf("Enter First Angle : ");
   scanf("%d",&firstAngle);

   printf("Enter Second Angle : ");
   scanf("%d",&secondAngle);

   thirdAngle=180-(firstAngle+secondAngle);
   printf("\n\nFirst angle : %d, Second angle : %d",firstAngle,secondAngle);
   printf("\nThird angle : %d",thirdAngle);

   getch();
}