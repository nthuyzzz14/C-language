#include <stdio.h>

int main(){
	int a;
	printf("Nhap so de kiem tra:");
	scanf("%d", &a);
	
	if (a % 2 == 0){
		printf(" La so chan !!!!!");
	}
	else if (a % 2 != 0){
		printf(" La so le !!!!");
	}
	return 0;
}
