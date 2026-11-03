#include <stdio.h>

int main(){
	int a, b;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	
	if(a > b){
		printf("a la so lon nhat !!!");
	}
	else {
		printf("b la so lon nhat !!!");
	}
	return 0;
}
