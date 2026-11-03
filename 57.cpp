#include <stdio.h>

void nhapmang(int a[], int q){
	printf("NHAP CHI SO CHO TUNG PHAN TU");
	for(int i = 0; i < q; i++){
		printf("\n");
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}

void xuatmang(int a[], int y){
	for(int i = 0; i < y; i++)
		printf("\nMANG VUA NHAP LA: %d", a[i]);
}

int findMin(int a[],int u){
	int min = a[0];
	for(int i = 1; i < u; i++){
		if(a[i] < min){
			min = a[i];
		}
	}
	return min;
}

int findMax(int a[], int h){
	int max = a[0];
	for(int i = 1; i < h; i++){
		if(a[i] > max){
			max = a[i];
		}
	}
	return max;
}


int main(){
	
	int a[10];
	nhapmang(a, 10);
	xuatmang(a,10);
	
	int max = findMax(a ,10);
	int min = findMin(a, 10);
	
	printf("\n");
	printf("\nGia tri lon nhat: %d", max);
	printf("\nGia tri nho nhat: %d", min);
	
	return 0;
}
