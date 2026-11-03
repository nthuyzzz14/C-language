#include <stdio.h>
// S= 1 + 2+ 3 +..+ n

int main(){
	int a;
	printf("Nhap mot gia tri bat ky: ");
	scanf("%d", &a);
	int sum = 0;
	int i;
	
	for (i = 1; i <= a; i++)
		sum = sum + i;
		printf("Tong cua so vua nhap la: %d", sum);
	return 0;
}
