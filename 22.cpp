#include <stdio.h>

int main(){
	int b;
	int sum = 0;
	int i = 1;
	
	printf("Nhap b cho bac: ");
	scanf("%d", &b);
	
	while (i <= b){
		if(i % 2 != 0){
			sum += i; 
		}
		i++;
	}
	printf("Tong so le cua b la: %d", sum);
	return 0;
}
