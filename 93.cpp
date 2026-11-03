#include <stdio.h>

void nhapmang(int a[], int *n){
	do {
		printf("\nNhap so luong phan tu: ");
		scanf("%d", n);
		if (*n <= 1 || *n >= 100){
			printf(" dieu kien kh thoa man nhap lai");
		}
	}
	while (*n <= 1 || *n >= 100);
	for (int i = 0; i < *n; i++){
		printf("\na[%d] = ", i);
		scanf("%d", &a[i]);
	}
}

void xuatmang(int a[], int n){
	for (int i = 0; i < n; i++){
		printf("\n%d\n", a[i]);
	}
}

long long giaithua(int a[], int n){
	long long gt = 1;
	for ( int i = 1; i <= n; i++){
		gt = gt * i;
	}
	return gt;
}

int main (){
	int a[100], n;
	nhapmang(a, &n);
	
	printf("mang vua nhap: ");
	xuatmang(a, n);
	
	long long kq = giaithua(a, n);
	printf("\nGiai thua cua %d = %lld", n, kq);
	
	return 0;
}
