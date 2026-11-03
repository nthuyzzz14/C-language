#include <stdio.h>
#include <ctype.h>
#include <string.h>

void xoa_kytu(char s[], char ch){
	int i, j;
	// i de duyet, j de luu nhung gia tir khong bi xoa 
	int n = strlen(s);
	
	for (i = 0; i < n; i++){
		if(tolower(s[i]) != tolower(ch)){
			//neu khac cong vao bien j
			s[j] = s[i];
			j++;
		}
	}
	//xoa cac ky tu khong duoc giu lai 
	s[j] = '\0';
}

int main(){
	char ch;
	char s[101];
	printf("Nhap chuoi: ");
		fgets(s, sizeof(s), stdin);
			s[strcspn(s, "\n")] = '\0';
	printf("Chuoi vua nhap: %s", s);
	
	//xoa ky tu 
	printf("\nNhap ky tu can xoa: ");
		scanf("%s", &ch);
		
	//goi ham xoa ky tu
	xoa_kytu(s, ch);
	
	printf("Chuoi ky tu sau khi xoa: %s",s);
	
	return 0;
}
