#include <stdio.h>
#include <conio.h>
#define PI 3.14
int main(void){

printf("\nHALLO\n");


int x;
scanf("%d", &x);
printf("\n%d\n",x);
int y;
y=x > 3 ? x*1:x*10;
printf("%d",y);
int m;
m=sizeof(int);
printf("\n----------------------------------\n");
printf("%i\n",m);
float a=50;
gotoxy(20,15);
printf("%f",a);
getch();
}
