#include <stdio.h>

void thaydoi(int *n){
	*n = *n + 1;
}

int main(){
	int n = 5;
		
	thaydoi(&n);
	
	printf("%d", n);
	
	return 0;
}
