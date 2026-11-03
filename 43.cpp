#include <stdio.h>
//kiem tra mot so co phai la so 4 hay khong, va vo tong chu so chia het cho 8

// ham kiem tra mot so co pahi la so 4 
int check4(int n){
	while (n != 0){
		if (n % 10 == 4)
		return 1;
		n /= 10;
	}
	return 0;
}

// tong chu so chia het cho 8
int check8(int n){
	int sum = 0;
	while (n != 0){
		sum += n % 10;
		 n /= 10;
	}
	return sum % 8 == 0;
}

int main(){
	for(int i = 1; i <= 1000; i++){
		if (check4
		(i) == 1)
		printf("%d ", i);
	}
	return 0;
}
