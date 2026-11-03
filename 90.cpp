#include <stdio.h>

void nhapMang(int a[], int *n){
	do {
		printf("\nNhap so phan tu: ");
		scanf("%d", n);
		if(*n <= 1 || *n >= 100){
			printf("Dieu kien khong hop le yeu cau nhap lai !!");
		}
	}
	while (*n <= 1 || *n >= 100);
	for (int i = 0; i < *n; i++){
		printf("\na[%d] = ", i);
		scanf("%d", &a[i]);
	}
}

void xuatMang(int a[], int n){
	for (int i = 0; i < n; i++){
		printf("\n%d", a[i]);
	}
}

int main (){
	int a[100], n;
	nhapMang(a, &n);
	
	printf("Mang vua nhap: ");
	xuatMang(a, n);
}
