#include <stdio.h>

// tinh tong S(n) = 1 + 2 + 3 + 4 + ...+ n

int S(int n){
	int sum = 0;
	for (int i = 1; i <= n; i++)
	sum += i;
   
   return sum;
}

int main(){
	int z = 10;
	int sum = S(z);
	printf("%d", sum);
}
