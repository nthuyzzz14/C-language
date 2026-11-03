#include <stdio.h>

int Tong (int x){
	 int sum = 0;
	 for (int i = 1; i <= x; i++)
	 sum += i;
	return sum;
}

int main (){
	int z = 10;
	int ketqua = Tong(z);
	printf("Ket qua: %d", ketqua);
	return 0;
}
