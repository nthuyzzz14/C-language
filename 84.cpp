#include <stdio.h>
#include <ctype.h>
#include <string.h>

void switchtype(char s[]){
	for (int i = 0; i < strlen(s); i++){
		if(isupper(s[i]))
		s[i] = tolower(s[i]);
	}
	printf("%s", s);
}

int main(){
	char s[101];
	printf("Nhap xau: ");
	fgets(s, sizeof(s), stdin);
	
	printf("xau vua nhap: %s", s);
	
	printf("Xau sau khi duoc xu ly: ");
	switchtype(s);
	
	return 0;
}
