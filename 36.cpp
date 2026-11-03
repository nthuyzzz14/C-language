#include <stdio.h>
#include <math.h>

int tong(int n){
	return n * ( n + 1) / 2;
}

void cuti(){
	printf("MA THANH THUY DEP TARI SO MOT THE GIOI\n");
	printf("%d", tong(100));
}

int main(){
	cuti();
	return 0;
}
