#include <stdio.h>
//ham nhap mamng(nhap chi so cho mang
void nhap_mang(int a[], int n){
	for(int i = 0; i < n; i++){
		printf("Nhap chi so cua mang a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}

//ham check le
int check_le(int z){
	if (z % 2 != 0)
		return 1;
	return 0;
}

//ham tinh tong 
int sum_le(int a[], int h){
	int sum = 0;
	for (int i = 0; i < h; i++){
		if(check_le(a[i])){
			sum += a[i];
		}
	}
	return sum;
}

//ham chinh chay chuong trinh
int main(){
	int n;
	printf("Nhap so luong mang: ");
	scanf("%d", &n);
	
	//nhap chi so cho mamng
	int a[n];
	nhap_mang(a, n);
	
	int kq = sum_le(a, n);
	printf("Tong so le cua day la = %d", kq);
	
	return 0;
}
