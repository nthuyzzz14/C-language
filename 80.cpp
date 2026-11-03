#include <stdio.h>
#include <string.h>
#include <ctype.h>

void xoaKytu(char s[], char ch){
	int count;
	int n = strlen(s);
	for (int i = 0; i < n; i++){
		if(tolower(s[i]) == ch)
		count++;
	}
	printf("So ky tu trung duoc nhap: %d\n", count);
}

int main(){
	char s[101], ch;
	printf("Nhap xau: ");
	fgets(s, sizeof(s), stdin);
	
	s[strcspn(s, "\n")] = '\0';
	
	printf("\nXau vua nhap: %s", s);
	
	printf("\nNhap ky tu de duyet: ");
	scanf("%s", &ch);
	xoaKytu(s, ch);
	
	return 0;
}
