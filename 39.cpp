#include <stdio.h>
#include <math.h>

void chinhphuong(int n){
	int can = sqrt(n);
	if (can * can == n ){
		printf("Yes\n");
	}
	else {
		printf("No\n");
	}
	printf("can bac hai cua %d bang %.2f", n, sqrt(n));
}

int Chinhphuong(int n){
	int can = sqrt(n);
	if (can * can == n) return 1;
	else return 0;
}

int main(){
	int a;
	printf("Nhap a: ");
	scanf("%d", &a);
	
	Chinhphuong(a);
	if (Chinhphuong(a) == 1){
		printf("True");
	}
	else {
		printf("False");
	}
	
	return 0;
}
