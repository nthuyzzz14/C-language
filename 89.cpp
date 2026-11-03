#include <stdio.h>
#include <string.h>
#include <ctype.h>

int demtu(char s[]){
	int count = 0;
	for (int i = 0; s[i] != '\0'; i++){
		if (s[i] != ' ' && (i == 0 || s[i-1] == ' '))
			count++;
	} 
	printf("\nSo tu trong xau la: %d", count);
}

int main (){
	char s[101];
		printf("Nhap xau: ");
			fgets(s, sizeof(s), stdin);
				s[strcspn(s, "\n")] = '\0';
				
	printf("Xau vua nhap la: %s", s);
	
	demtu(s);
	
	return 0;
}
