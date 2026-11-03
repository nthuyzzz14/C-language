#include <stdio.h>

int main(){
	int n;
	printf("nhap mot so: ");
	scanf("%d", &n);
	
	int i;
	for(i = 1; i <= n; i++){
		if (i % 3 == 0){
		printf("Duoi day la cac so la boi cua 3:");
		printf("%d ", i);
	}
	}
}
