#include <stdio.h>

void nhapMang(int a[], int *n){
	do {
		printf("Nhap so phan tu: ");
		scanf("%d", n);
		if(*n <= 1 || *n >= 100){
			printf("Dieu kien khong thoa man, yeu cau nhap lai !!\n");
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

int chenphantu(int a[], int *n, int x, int k){
	for (int i = *n; i > k+1; i--){
		a[i] = a[i-1];
	}
	a[k+1] = x;
	(*n)++;
}

int main(){
	int a[100], n, x, k;
	nhapMang(a, &n);
	
	printf("Mang vua nhap: ");
	xuatMang(a, n);
	
	printf("\nNhap vi tri chen: ");
		scanf("%d", &k);
	printf("\nNhap gia tri chen: ");
		scanf("%d", &x);
	
	chenphantu(a, &n, x, k);
	printf("\nMang sau khi xu ly: ");
	xuatMang(a, n);
	
	return 0;
}
