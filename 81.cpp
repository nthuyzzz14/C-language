#include <stdio.h>

void nhapmang(int a[], int *n){
	do {
		printf("Nhap so nguyen n phan tu (1 < n < 100): ");
		scanf("%d", n);
		if(*n <= 1 || *n >= 100){
			printf("\nKhong thoa man dieu kien yeu cau nhap lai !!\n");
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

int timMin(int a[], int n){
	int min = 0;
	for (int i = 0; i < n; i++){
		if (a[i] < min)
		min = a[i];
	}
	return min;
}

int timMax(int a[], int n){
	int max = 0;
	for(int i = 0; i < n; i++){
		if(a[i] > max)
		max = a[i];
	}
	return max;
}

int minANDmax(int a[], int n){
	int min, max = 0;
	for (int i = 0; i < n; i++){
		if (a[i] < min){
			min = a[i];
		}
		else if (a[i] > max){
			max = a[i];
		}
	}
	printf("Gia tri nho nhat: %d\n", min);
	printf("Gia tri lon nhat: %d\n", max);
	return min, max;
}

int main(){
	int a[100], n;
	nhapmang(a, &n);
	
	printf("Mang vua nhap: ");
	xuatMang(a, n);
	
	minANDmax(a, n);
}
