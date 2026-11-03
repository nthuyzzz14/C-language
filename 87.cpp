#include <stdio.h>
#include <string.h>

void daotu(char s[]){
	int left = 0;
	int right = strlen(s) - 1;
	while (left < right){
		int temp = s[right];
		s[right] = s[left];
		s[left] = temp;
		left++;
		right--;
	}
	
}

int main(){
	char s[101];
	printf("Nhap xau: ");
	fgets(s, sizeof(s), stdin);
	s[strcspn(s, "\n")] = '\0';
	
	printf("Xau vua nhap: %s", s);
	
	daotu(s);
	
	printf("\nXau sau xu ly: %s", s);
	
	return 0; 
}
