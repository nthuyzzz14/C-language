#include <stdio.h>

int main(){
	int a;
	int sum = 0;
	
	printf("Nhap mot so de tinh tong (nhap 0 de ket thuc): ", a);
	
	while(1){
		scanf("%d", &a);
		
		if (a == 0)
		break;
		
		sum = sum + a;
	}
	printf("Tong cua cac so vua nhap la: %d", sum);
	return 0;
}
