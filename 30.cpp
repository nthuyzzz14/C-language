#include <stdio.h>

int main (){
	int a, b;
	int x, y;
	int ucln, bcnn;
	
	printf("Nhap hai so nguyen duong a va b: ");
	scanf("%d %d", &a, &b);
	
	x = a;
	y = b;
	
	// CT tim uoc chung lon nhat
	while ( x != y ){
		if (x > y)
		x = x - y;
		else 
		y = y - x;
	}
	
	//Ct tim boi chung nho nhat va gan ucln cho x
	ucln = x;
	bcnn = (a * b) / ucln;
	
	//in ra 2 output cua chuong trinh
	printf("\nUoc so chung lon nhat (UCLN): %d", ucln);
	printf("\nBoi so chung nho nhat (BCNN): %d", bcnn);
	
	return 0;
}
