#include <stdio.h>

void f(int a[][4], int m){
	printf("%d",a[2][3]);
}

int main(){
	int a[3][4]={
		{1, 2, 3, 4},
		{4, 5, 6, 6},
		{3, 5, 7, 9}
	};
	
	f(a, 3);
	
	return 0;
}
