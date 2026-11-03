#include <stdio.h>

int main(){
	int x = 1, y = 0;
	
	while (x < 4){
		y += x;
		printf("%d", y);
		x++;
	}
	return 0;
}
