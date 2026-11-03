#include <stdio.h>

void chuyendoi(int *x, int *y){
	int trong = *x;
	*x = *y;
	*y = trong;
	printf("%d %d ", *x, *y);
}

int main(){
	int a, b;
	a = 1000;
	b = 2000;
	
	printf("%d %d\n", a, b);
	chuyendoi(&a,&b);
	
	return 0;
}
