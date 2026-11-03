#include <stdio.h>

void nhapMang(int a[], int *n){
	do{
		printf("\nNhap so phan tu: ");
		scanf("%d", n);
		if(*n <= 1 || *n >= 100){
			printf("Khong thoa man dieu kien, nhap lai !!");
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
	for(int i = 0; i < n; i++){
		printf("\n%d", a[i]);
	}
}

int tinhtong(int a[], int n){
	int sum = 0;
	for (int i = 0; i <= n; i++){
		sum = sum + i;
	}
	return sum;
}

int main (){
	int a[100],n;
	nhapMang(a, &n);
	
	printf("Mang vua nhap la: ");
	xuatMang(a, n);
	
	int kq = tinhtong(a, n);
	printf("\nTong so phan tu cua mang: %d", kq);
	
	return 0;
}
