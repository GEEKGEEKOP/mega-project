#include <stdio.h>
#include <conio.h>
#define PI 3.14

int main(){

float x,y,total,p;
printf("\nENTER X,Y? ");
scanf("%f%f",&x, &y);
total=x * y;
printf("\n area = %f ",total);
p=(x + y) * 2;
printf("\n p = %f ",p);
printf("\n--------------------------");
getch();
}
