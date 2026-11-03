#include <stdio.h>

int *thaydoi(int *z, int *q){
	z = q;
	return z;
}

int main(){
	int a = 26;
	int b = 36;
	
	int *p1 = &a;
	int *p2 = &b;
	printf("Gia tri khi chua thay doi\n");
	printf("gia tri cua a la: %d\n", p1);
	printf("gia tri cua b la: %d\n", p2);
	p1 = thaydoi(p1,p2);
	printf("Gia tri sau khi thay doi\n");
	printf("gia tri cua a la: %d\n", p1);
	printf("gia tir cua b la: %d\n", p2);
	
	return 0;
}
