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

int gtln(int a[], int z){
	int max = a[0];
	for (int i = 1; i < z; i++){
		if(max < a[i])
			max = a[i];
	}
	return max;
}

int main (){
	int n;
	printf("NHAP SO LUONG PHAN TU: ");
	scanf("%d", &n);
	
	int a[n];
	nhap_chiso(a, n);
	xuat_mang(a, n);
	
	int kq = gtln(a, n);
	printf("\n");
	printf("\nGIA TRI LON NHAT CUA MANG = %d", kq);
	
	return 0;
}
