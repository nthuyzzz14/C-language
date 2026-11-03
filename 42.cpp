#include <stdio.h> 

int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	int a[5]={2, 3, 5, 2, 1};
	
	for(int i = 0; i < n; i++){
		printf("\na[%d] = %d", i, a[i]);
	}
	return 0;
}
