#include <stdio.h>

int tong(int n);
void helo();

void helo(){
	printf("Helo Viet Nam\n");
	printf("%d", tong(100));
}

int tong(int n){
	return n * (n + 1) / 2;
}

int main(){
	helo();
	
	return 0;
}
