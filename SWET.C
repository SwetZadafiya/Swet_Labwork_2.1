#include<stdio.h>
#include<conio.h>

void main()
{
int a,b,c,d,e,f,g;

clrscr();
a=12;
b=6;
c=a+b;
d=a-b;
e=a*b;
f=a/b;
g=a%b;
printf("Addition of %d and %d is %d\n",a,b,c);
printf("Subtraction of %d and %d is %d\n",a,b,d);
printf("Multiplication of %d and %d is %d\n",a,b,e);
printf("Division of %d and %d is %d\n",a,b,f);
printf("Modul of %d and %d is %d",a,b,g);

getch();
}