#include <stdio.h>
#include <math.h>

int demsouoc(int n){
	int dem = 0;
	for (int i = 1; i <= n; i++){
		if (n % i == 0){
			dem++;
		}
	}
	return dem;
}

int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	if (n <= 0){
		printf("Vui long nhap so nguyen duong");
	}
	else {
		int ketqua = demsouoc(n);
		printf("Cac so uoc cua %d la %d", n, ketqua);
	}
	return 0;
}
