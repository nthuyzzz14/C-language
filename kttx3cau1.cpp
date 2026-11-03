#include <stdio.h>
int KiemTraSoNguyenTo(int a[],int x){
	if(x < 2)
		return 0;
		
	for(int i = 2; i < x/2; i++){
		if(x % i == 0)
			return 0;
	}
	return 1;
}

void nhap_mang(int a[], int n){
	do{
		printf("Nhap so phan tu (1 < n < 100): ");
		scanf("%d", &n);
	} while (n <= 1 || n >= 100);
	for (int i = 0; i < n; i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}

void hien_thimang(int a[],int h){
	for(int i = 0; i < h; i++){
		printf("\nMang vua nhap la: %d", a[i]);
	}
	printf("\n");
}

int main(){
	int a[100];
	int n;
	printf("Nhap so luong mang: ");
	scanf("%d", &n);
	
	nhap_mang(a, n);
	hien_thimang(a, n);
	
	if(KiemTraSoNguyenTo(a, n)){
		printf("MANG LA SO NGUYEN TO !");
	} else 
		printf("MANG KHONG LA SO NGUYEN TO !");
		
	return 0;
}
