#include <stdio.h>
#include <string.h>


int main (){
	char s[100];
	printf("Nhap chuoi: ");
	fgets(s, sizeof(s), stdin);
	
	int left = 0;
	int right = strlen(s)-1;
	
	if(s[right] == '\n'){
		right--;
	}
	
	while (left < right){
		int temp = s[left];
		s[left] = s[right];
		s[right] = temp;
		left++;
		right--;
	}
	
	printf("Chuoi sau khi xu ly: %s", s);
	
	return 0;
}
