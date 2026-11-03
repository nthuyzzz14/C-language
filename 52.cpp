#include <stdio.h>

void nhap_chiso(int a[], int x){
	printf("\n");
	printf("NHAP CHI SO CHO TUNG PHAN TU\n");
	for(int i = 0; i < x; i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}

void xuat_mang(int a[], int b){
	for(int i = 0; i < b; i++)
		printf("\nMANG VUA NHAP: %d", a[i]);
}

void section(int a[], int n){
	for (int i = 0; i < n-1; i++){
		for (int j = i+1; j < n; j++){
			if (a[i] > a[j]){
				int t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
}

int main (){
	int n;
	printf("NHAP SO LUONG PHAN TU: ");
	scanf("%d", &n);
	
	int a[n];
	nhap_chiso(a, n);
	xuat_mang(a, n);
	
	section(a, n);
	
	printf("\n");
	printf("\nMANG SAU KHI SAP XEP");
	xuat_mang(a, n);
	
	return 0;
}
