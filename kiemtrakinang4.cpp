#include <stdio.h>
#include <string.h>
#include <ctype.h>

void xoa_kytu(char s[], char ch){
	int i, j;
	int n = strlen(s);
	
	for(i = 0; i < n; i++){
		if(s[i] == 'ch' && s[i] == 'CH'){
			s[j] = s[i];
			j++;
		}
	}
}

int main (){
	//nhap mang
	char s[101];
	char ch;//ham nhap ky tu can xoa
	printf("Nhap chuoi: ");
	fgets(s, sizeof(s), stdin);
	
	//xuat mang
	printf("CHuoi vua nhap: %s", s);
	
	printf("Nhap ky tu can xoa: ");
	scanf("%s", &ch);
	
	//xoa ky tu "ch"
	xoa_kytu(s, ch);
	printf("Chuoi ki tu sau khi xoa: %s", s);
	
	return 0;
}
