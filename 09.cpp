#include <stdio.h>
#include <math.h>

int main(){
	double b;
	
	printf("nhap mot so: ");
	scanf("%lf", &b);
	
	if (b < 0){
		printf("Khong the tinh can bac hai cau so am !!!\n");
	}
	else {
		printf("%.2lf la can bac hai cua: %.2lf", b, sqrt(b));
	}
	return 0;
}
