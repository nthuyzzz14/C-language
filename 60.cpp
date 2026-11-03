#include <stdio.h>
#include <string.h>

int DemChuCai(char s[]){
	int letter = 0;
	for (int i = 0; s[i] != '\0'; i++){
		if ((s[i] >= 'a' && s[i] <= 'z') ||
			(s[i] >= 'A' && s[i] <= 'Z'))
				letter = letter + 1;
	}
	return letter;
}

int DemChuSo(char s[]){
	int digit = 0;
	for (int i = 0; s[i] != '\0'; i++){
		if(s[i] >= '0' && s[i] <= '9')
			digit = digit + 1;
	}
	return digit;
}

int DemKhoangTrang(char s[]){
	int space = 0;
	for (int i = 0; s[i] != '\0'; i++){
		if(s[i] == ' ')
			space = space + 1;
	}
	return space;
}

void switchlower(char s[]){
	for (int i = 0; s[i] != '\0'; i++){
		if(s[i] >= 'A' && s[i] <= 'Z')
			s[i] = s[i] + 32;
	}
}

void switchupper(char s[]){
	for (int i = 0; s[i] != '\0'; i++){
		if(s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}
}

int main(){
	char s[100];
	printf("Nhap chuoi: ");
	gets(s);
	
	int letter = DemChuCai(s);
	int digit = DemChuSo(s);
	int space = DemKhoangTrang(s);
	
	switchlower(s);
	
	printf("\n");
	
	printf("So chu cai: %d", letter);
	printf("\n");
	printf("So chu so: %d", digit);
	printf("\n");
	printf("So khoang trang: %d", space);
	printf("\n");
	printf("Chuoi sau khi xu ly: %s", s);
	
	return 0;
}
