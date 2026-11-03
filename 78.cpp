#include <stdio.h>
#include <math.h>

void nhap_mang(int a[], int n){
	printf("Nhap gia tri cho tung phan tu !\n");
	for(int i = 0; i < n; i++){
		if(1 < n && n < 100){
			printf("\na[%d] = ", i);
			scanf("%d", &a[i]);
		}
		else {
			printf("Dieu kien khong thoa man, hay nhap lai !!");
		}
	}
	printf("\n");
}

void xuat_mang(int a[], int n){
	printf("Mang duoc xu ly: \n");
	for(int i = 0; i < n; i++){
		printf("%d\n", a[i]);
	}
}

int lasoChinhPhuong(int n){
	int x = sqrt(n);
	if (x * x == n)
		return 1;
	else
		return 0;
}

void chuyensoCPthanh0(int a[], int h){
	for (int i = 0; i < h; i++){
		if (lasoChinhPhuong(a[i])){
			a[i] = 0;
		}
	}
}

int main(){
	int n;
	printf("Nhap so luong phan tu: ");
	scanf("%d", &n);
	int a[n];
	
	nhap_mang(a, n);
	
	chuyensoCPthanh0(a, n);
	
	xuat_mang(a, n);
	
	return 0;
}
