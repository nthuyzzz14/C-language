#include <stdio.h>

int main (){
	int n;
	scanf("%d",&n);
	int sum = 0;
	
	while(n != 0){
		sum += n % 10;
		n /= 10;
	}
	printf("Tong cac so vau duoc nhap: %d", sum);
	printf("\nGia tri cua bien n: %d", n);
	return 0;
}
