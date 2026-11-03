#include <stdio.h>

int main(){
	int a;
	int sum = 0;
	int i = 1;
	
	printf("Nhap a: ");
	scanf("%d", &a);
	
	while(i <= a){
		if ( i % 2 == 0){
			sum += i;
		}
		i++;
	}
	printf("Tong gia tri so chan cua a la: %d", sum);
	return 0;
}
