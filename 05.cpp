#include <stdio.h>

int main(){
	int a, b, c, d;
	int min;
	
	printf("Nhap 4 so a b c d:");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	
	min = a;
	
	if(b < min){
		min = b;	
    }
    if (c < min){
    	min = c;
	}
	if (d < min){
		min = d;
	}
	
	printf("So nho nhat la: %d", min);
	
	return 0;
}
