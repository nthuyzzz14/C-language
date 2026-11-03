#include <stdio.h>

int state(int a[], int x){
	printf("NHAP CHI SO CHO TUNG PHAN TU\n");
	for(int i = 0; i < x; i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}

void xuat_mang(int a[], int n){
	for(int i = 0; i < n; i++){
		printf("\nMang vua nhap la: %d", a[i]);
	}
}

void section(int a[], int n){
	for(int i = 0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			if(a[i] > a[j]){
				int t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
}

int main(){
	int n;
	printf("Nhap so luong phan tu: ");
	scanf("%d", &n);
	
	int a[n];
	state(a, n);
	xuat_mang(a, n);
	
	section(a, n);
	
	printf("\n");
	printf("\nMang sau khi sap xep");
	xuat_mang(a, n);
	
	return 0;
}
