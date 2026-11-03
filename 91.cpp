#include <stdio.h>

void nhapMang(int a[], int *n){
	do{
		printf("\nNhap so phan tu: ");
		scanf("%d", n);
		if (*n <= 1 || *n >= 100){
			printf("Dieu kien khong hop le, yeu cau nhap lai !!");
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

void tachMang(int a[], int n, int b[], int c[], int *nb, int *nc){
	*nb = 0;
	*nc = 0;
	for(int i = 0; i < n; i++){
		if (a[i] > 0){
			b[*nb] = a[i];
			(*nb)++;
		}
		else {
			c[*nc] = a[i];
			(*nc)++;
		}
	}
}

int main (){
	int a[100], n, b[n], c[n], nb, nc;
	nhapMang(a, &n);
	
	printf("Mang vua nhap: ");
	xuatMang(a, n);
	
	tachMang(a, n, b, c, &nb, &nc);
	printf("\nMang sau khi xu ly: ");
	
	printf("Mang so duong : ");
	xuatMang(b, nb);
	
	printf("\nMang so am: ");
	xuatMang(c, nc);
	
	return 0;
}
