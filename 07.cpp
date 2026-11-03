#include <stdio.h>

int main (){
	int a= 500, b=300;
	int tong = a + b;
	int hieu = a - b;
	int tich = a * b;
	float thuong = a / b;
	
	printf("Tong: %d\nHieu: %d\nTich: %d\nThuong: %.2f", tong, hieu, tich, thuong);
}
