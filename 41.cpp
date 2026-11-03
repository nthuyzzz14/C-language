#include <stdio.h>
#include <math.h>

int giaithua(int n){
	if (n == 0) 
	 return 1;
	return n * giaithua(n - 1);
}

int main(){
	int a = 10;
	giaithua(a);
	printf("%d", giaithua(a));
}
