#include<stdio.h>
#include<conio.h>
void main()
{
int r;
float pi=3.14,area,circum;
clrscr();
printf("Enter the radius:");
scanf("%d",&r);
area=pi*r*r;
circum=2*pi*r;
printf("Area=%f \n Circumference=%f",area,circum);
getch();
}