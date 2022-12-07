#include <stdio.h>
 
int main(){
int a,i,b;
a=1000000000;
for (i=1;a >= i;i++){
b=a%i;
if (b == 0){
printf("\n------>  *%d*",i);
}
}

}
