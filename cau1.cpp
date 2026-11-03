#include <stdio.h>
#include <math.h>

//ham kiem tra so chinh phuong
int lasochinhphuong(int n){
	int can = sqrt(n);
	if (can * can == n) return 1;
	else return 0;
}

//lieet ke so chinh phuong nho hon 1 so n
void LietKeSochinhphuong(int n){
	printf("Cac so chinh phuong nho hon %d\n", n);
	for (int i = 1; i < n; i++){
		if (lasochinhphuong(i))
		printf("%d ", i);
	}
	printf("\n");
}

int main(){
	int n;
	printf("Nhap n la mot so nguyen: ");
	scanf("%d", &n);
	
	LietKeSochinhphuong(n);
	
}





