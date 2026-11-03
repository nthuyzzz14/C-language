#include <stdio.h>

int main (){
	int a = 10;
	int count = 0;
	
	while (a > 0){
		a -= 3;
		count++;
	}
	printf("So vong lap cua chuong trinh la: %d", count);
	return 0;
}
