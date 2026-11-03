#include <stdio.h>
#include <stdlib.h>

int main(){
	int x = 10;
	int *px = x;
	
	printf("%d", px);
	
	free(px);
}
