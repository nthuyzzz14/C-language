#include <stdio.h>

int main(){
	int n,m;
	printf("Nhap so hang va cot: ");
	scanf("%d%d", &n, &m);
	
	
	int a[n][m];
	for(int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			printf("Nhap chi so phan tu cua hang %d cot %d: ", i , j);
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("\n");
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			printf("%d ", a[i][j]);	
		}
		printf("\n");
	}
}
