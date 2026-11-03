#include <stdio.h>

//ham luu mang
void storage (int a[], int n){
	printf("\n");
	printf("NHAP 5 SO NGUYEN VAO TUNG MANG !!");
	for (int i = 0; i < n; i++){
		printf("\na[%d] = ", i);
		scanf("%d", &a[i]);
	}
}

//ham tinh tong 
int Sum(int a[], int y){
	int sum = 0;
	for(int i = 0; i < y; i++){
		sum += a[i];
	}
	return sum;
}

int main(){
	int h;
	printf("Nhap so luong mang: ");
	scanf("%d", &h);
	
	int arr[h];
	storage(arr, h);
	
	int kq = Sum(arr, h);
	printf("\n");
	printf("Tong cua cac phan tu trong mang = %d", kq);
	
	return 0;
}
