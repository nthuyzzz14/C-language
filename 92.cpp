#include <stdio.h>
#include <ctype.h>
#include <string.h>

void xoasp(char s[]){
	int k = 0;
	for (int i = 0; s[i] != '\0'; i++){
		if(s[i] != ' '){
			s[k] = s[i];
			k++;
		}
	}
	s[k] = '\0';
	printf("\nXau sau khi xu ly: %s", s);
}

int main (){
	char s[101];
		printf("Nhap xau: ");
			fgets(s, sizeof(s), stdin);
				s[strcspn(s, "\n")] = '\0';
				
	printf("Xau vua nhap: %s", s);
	
	xoasp(s);
	
	return 0;
}
