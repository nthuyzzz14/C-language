#include <stdio.h>

int main(){
	int a[10];
	int max, min;
	
	// nhap 10 so nguyen tu ban phim
	printf("NHAP 10 SO NGUYEN\n");
	for(int i = 0; i < 10; i++){
		printf("\na[%d] = ", i);
		scanf("%d", &a[i]);
	}
	
	//khoi tao max min
	max = a[0];
	min = a[0];
	
	//kiem tra max min 
	for(int i = 1; i < 10; i++){
		if(a[i] > max){
			max = a[i];
		}
		if(a[i] < min){
			min = a[i];
		}
	}
	
	printf("Gia tri lon nhat: %d", max);
	printf("\nGia tri nho nhat : %d", min);
	
	return 0;
}
