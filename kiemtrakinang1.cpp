#include <stdio.h>

int main(){
	int a, b, c;
	printf("Nhap du lieu:");
	scanf("%d %d %d", &a, &b, &c);
	
	if (a == b && b == c){
		printf("La tam giac deu !!");
	}
	else {
		printf("khong la tam giac deu !!");
	}
	return 0;
}
