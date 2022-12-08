#include <stdio.h>

main(){
	int n;
	scanf("\n>>> %d",&n);
	int x;
	x=n%2;
	printf("%d",x);
	if(x == 0){
		printf("\nEven number");
		}
	if (x == 1){
		printf("\nOdd number");
		}


}
