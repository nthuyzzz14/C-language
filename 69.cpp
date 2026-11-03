#include <stdio.h>
#include <stdlib.h>

int main (){
	int x = 10;
	int *p;
	
	p = &x;
	
	printf("Gia tri cua con tro p la dia chi cua &x: %d\n", p);
	printf("Gia tri cua x ma p tro den la: %d\n", *p);
	
	*p = 200;
	printf("Gia tri cua x sau khi thay doi: %d %d\n",x, *p);
}
