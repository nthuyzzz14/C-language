#include <stdio.h>

void pointer(int *x){
	printf("Gia tri cua con tro x la: %d\n", x);
	printf("Gia tri cua H ma x dang tro toi: %d\n", *x);
	//thay doi gia tri cua H
	*x = 2027;
}

int main(){
	int H = 2026;
	printf("Gia tri cua H la: %d\n", H);
	pointer(&H);
	printf("Gia tri cua H sau khi thay doi la: %d", H);
}
