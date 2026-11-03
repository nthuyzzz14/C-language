#include <stdio.h>
#include <math.h>

void nhapMang(int a[], int *n){
	do {
		printf("\nNhap so phan tu: ");
		scanf("%d", n);
		if (*n <= 1 || *n >= 100){
			printf("Dieu kien khong thoa man, yeu cau nhap lai");
		}
	}
	while (*n <= 1 || *n >= 100);
	for (int i = 0; i < *n; i++){
		printf("\na[%d] = ", i);
		scanf("%d", &a[i]);
	}
	printf("\n");
}

void xuatMang(int a[], int n){
	for (int i = 0; i < n; i++){
		printf("\n%d", a[i]);
	}
}

int soChinhPhuong(int n){
	int x = sqrt(n);
	
	if (x * x == n)
		return 1;
	else 
		return 0;
}

void doiCPthanh0(int a[], int n){
	for (int i = 0; i < n; i++){
		if (soChinhPhuong(a[i])){
		a[i] = 0;
		}
	}
}

int main(){
	int a[100], n;
	nhapMang(a, &n);
	
	printf("Mang vua nhap: ");
	xuatMang(a, n);
	
	doiCPthanh0(a, n);
	
	printf("Mang sau khi xu ly: ");
	xuatMang(a, n);
	
	return 0;
}
