// Temperature Converter

#include<stdio.h>
#include<conio.h>

main(){
   float celsius, fahrenheit;
   clrscr();

   printf("The temperature in Celsius : ");
   scanf("%f",&celsius);

   fahrenheit=(((float)9/5)*celsius)+32;

   printf("\n\nThe temperature in Fahrenheit : %.2f",fahrenheit);

   getch();
}