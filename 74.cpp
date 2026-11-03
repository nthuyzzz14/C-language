#include <stdio.h>

int sumSquare(int n){
	int sum = 0;
	for (int i = 1; i <= n; i++){
		sum = sum + i*i;
	}
	return sum;
}

double sumS(int n){
	double sum2 = 0;
	double mau;
	for (int k = 1; k <= n; k++){
		mau = sumSquare(k);
		if (k % 2 == 1){
			sum2 = sum2 + 1.0/mau;
		}
		else {
			sum2 = sum2 - 1.0/mau;
		}
	}
	return sum2;
}

int main(){
	int n;
	printf("Nhap n so nguyen duong: ");
	scanf("%d", &n);
	
	double s;
	s = sumS(n);
		printf("Tong cua so nguyen duong = %.2lf", s);
		
	return 0;
}
