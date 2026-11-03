#include <stdio.h>
#include <math.h>

//  kiem t? so ngto
//so nguyen to n >= 2
int checkIsPrime(int n){
	if (n < 2) return 0;
	for (int i = 2; i * i <= n; i++){
		if (n % i == 0) return 0;
	}
	return 1;
}

//liet ke so nguyen to nho hon n
void LietKeSoNguyenTo(int n){
	for (int i = 2; i < n; i++){
		if(checkIsPrime(i) == 1)
			printf("%d ", i);
	}
}

int main(){
	int n;
	printf("Nhap mot so nguyen n: ");
	scanf("%d", &n);
	
	printf("\nCac so nguyen to nho %d la: ", n);
	LietKeSoNguyenTo(n);
	
	return 0;
}
