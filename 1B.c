#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
int a,b,choice,s;
clrscr();
printf("\n Enter 2 values for a and b:");
scanf("%d %d",&a,&b);
while(choice!=7)
{
printf("\n .....MENU....\n");
printf("1.ADD 2.SUB 3.MUL 4.DIV 5.MOD 6.SQUARE 7.EXIT");
printf("\n Enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
    printf("\n Sum=%d",a+b);
    break;
case 2:
    printf("\n Difference=%d",a-b);
    break;
case 3:
    printf("\n Product=%d",a*b);
    break;
case 4:
    printf("\n Quotient=%d",a/b);
    break;
case 5:
    printf("\n Remainder=%d",a%b);
    break;
case 6:
    printf("Square of a=%d\t Square of b=%d",a*a,b*b);
    break;
case 7:
    exit(0);
    break;
default:
    printf("\n Wrong choice");
}
}
getch();
}