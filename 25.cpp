#include <stdio.h>

int main(){
	int a, b;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	
	if (a > b){
		printf("a la so lon nhat !");
	}
	else if(a < b) {
		printf("b la so lon nhat !");
	}
	else if( a == b){
		printf("a va b bang nhau !");
	}
	return 0;
}

