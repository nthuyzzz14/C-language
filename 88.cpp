#include <stdio.h>
#include <string.h>
#include <ctype.h>

void xoakytu(char s[], char ch){
	int j = 0;
	for(int i = 0; i < strlen(s); i++){
		if(tolower(s[i]) != tolower(ch)){
			s[j] = s[i];
			j++;
		}
	}
	s[j] = '\0';
}

int main(){
	char s[101], ch;
	printf("Nhap xau: ");
		fgets(s, sizeof(s), stdin);
			s[strcspn(s, "\n")] = '\0';
	
	printf("Xau vua nhap: %s", s);
	
	printf("\nNhap ky tu can xoa: ");
		scanf("%s", &ch);
	
	xoakytu(s, ch);
	
	printf("\nXau sau khi xu ly: %s", &s);
	
	return 0;
}
