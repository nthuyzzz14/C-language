#include <stdio.h>

void nhapchiso(int a[], int y){
	printf("NHAP CHI SO CHO TUNG PHAN TU !!!\n");
	for(int i = 0; i < y; i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}

void xuatmang(int a[], int x){
	for(int i = 0; i < x; i++){
		printf("\nMang vua nhap la: %d", a[i]);
	}
}

int gtln(int a[], int u){
	int max = a[0];
	for (int i = 1; i < u; i++){
		if(max < a[i])
			max = a[i];
	}
	return max;
}

int main(){
	int n;
	printf("Nhap so luong phan tu: ");
	scanf("%d", &n);
	
	int a[n];
	nhapchiso(a, n);
	xuatmang(a, n);
	
	gtln(a, n);
	
	int kq = gtln(a, n);
	printf("\n");
	printf("Gia tri lon nhat la: %d", kq);
	
	return 0;
}
