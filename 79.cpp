#include <stdio.h>

void nhap_mang(int a[], int *n){
	do{
		printf("Nhap so phan tu n (1 < n < 100): ");
		scanf("%d", n);
	}
	while (*n <= 1 || *n >= 100);
	for (int i = 0; i < *n; i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	printf("\n");
}

void xuat_mang(int a[], int n){
	for (int i = 0; i < n; i++){
		printf("%d\n", a[i]);
	}
}

void chen_phantu(int a[], int *n, int x, int k){
	for (int i = *n; i > k+1; i--){
		a[i] = a[i-1];
	}
	a[k+1] = x;
	(*n)++;
}

int main(){
	int a[100], n;
	nhap_mang(a, &n);
	printf("Mang vua nhap:\n");
	xuat_mang(a, n);
	
	int k, x;
	printf("Nhap vi tri: ");
	scanf("%d", &k);
	printf("Nhap gia tri chen: ");
	scanf("%d", &x);
	
	chen_phantu(a, &n, x, k);
	printf("Mang sau khi chen: \n");
	xuat_mang(a, n);
	
	return 0;
}
