#include <stdio.h>
//duyeet tu can [b;a]

int main(){
	int a,b,i;
	
	printf("nhap a: ", a);
	scanf("%d", &a);
	
	printf("nhap b: ", b);
	scanf("%d", &b);
	
	for (i = b; i >= a; i--){
		printf("%d\n", i);
	}
	return 0;
}
