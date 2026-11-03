#include <stdio.h>

int main(){
	int a[10];
	int max, min;
	
	//nhap mang
	printf("NHAP 10 SO NGUYEN\n");
	for(int i = 0; i < 10; i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	
	//khoi min va max
	max = a[0];
	min = a[0];
	
	//kiem tra min va max 
	for(int i = 1; i < 10; i++){
		if(a[i] > max){
			max = a[i];
		}
		if(a[i] < min){
			min = a[i];
		}
	}
	
	//in ket qua 
	printf("GIa TRI LON NHAT = %d", max);
	printf("\nGIA TRI NHO NHAT = %d", min);
	
	return 0;
}
