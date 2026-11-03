#include <stdio.h>

int main(){
	int n;
	int a, b, c;
	
	printf("Cac so thoa man dieu kien la: ");
	
	for (n =100; n <= 999; n++){
		// tach hang tram
		a = n / 100;
		// tach hang chuc 
		b = (n / 10) % 10;
		// tach hang don vi
		c = n % 10;
		
		// cau lenh kiem tra dieu kien
		if (a * b * c == a + b + c){
			printf("\n                             %d", n);
		}
	}
	return 0;
}
