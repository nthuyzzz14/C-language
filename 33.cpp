#include <stdio.h>

int GiaiThua(int n){
	if (n == 0)
	return 1;
	else
	return GiaiThua(n - 1) * n;
}

int GiaiThua(int n){
	if (n > 0)
	return GiaiThua(n - 1) * n;
	else 
	return 1;
}
