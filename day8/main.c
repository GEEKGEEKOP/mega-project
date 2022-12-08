#include <stdio.h>

main(){
	printf("\nHELLO WORLD\n");
	int a,b,i,c;
	a=0;
	b=1;
	c=0;
	for (i=1;i <= 300;i++){
		c=a + (b++);
		printf("%d\n",c);
		a++;

	}

}
