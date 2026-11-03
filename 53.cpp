#include <stdio.h>

void nhap_mang(int a[], int x){
	printf("\n");
	printf("NHAP CHI SO CHO TUNG PHAN TU !!!\n");
	for(int i = 0; i < x; i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}

void xuat_mang(int a[], int y){
	for(int i = 0; i < y; i++){
		printf("\nMang vua nhap: %d", a[i]);
	}
}

int main(){
	int n;
	printf("Nhap so luong phan tu: ");
	scanf("%d", &n);
	
	int a[n];
	nhap_mang(a, n);
	xuat_mang(a, n);
}
