#include <stdio.h>

// ham nhap day
void nhap_mang(int a[], int n){
	for(int i = 0; i < n; i++){
		printf("Nhap i cua a[%d] = ", i);
		scanf("%d", &a[i]);
	}	
}

//ham kiem tra le
int check_le(int x){
	if (x % 2 != 0) 
		return 1;
	return 0;
}

//ham in ra tong so le
int sum_le(int a[], int y){
	int sum = 0;
	for(int i = 0; i < y; i++){
		if(check_le(a[i])){
			sum += a[i];
		}
	}
	return sum;
}

int main(){
	int n;
	printf("Nhap so mang: ");
	scanf("%d", &n);
	
	int a[n];
	nhap_mang(a, n);
	
	int ketqua = sum_le(a, n);
	
	printf("Tong so le cua day duoc nhap = %d", ketqua);
	
	return 0;
}
