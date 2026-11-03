#include <stdio.h>

int demtu(char s[]){
	int count = 0;
	for (int i = 0; s[i] != '\0'; i++){
		if(s[i] != ' ' && (i == 0 || s[i-1] == ' '))
			count++;
	}
	return count;
}

int main(){
	int count;
	char s[100];
	printf("Nhap chuoi: ");
	fgets(s, sizeof(s), stdin);
	
	for (int i = 0; s[i] != '\0'; i++){
		if(s[i] != ' ' && (i == 0 || s[i-1] == ' '))
			count++;
	}
	
	printf("So tu cua chuoi la: %d", count);
	
	return 0;
}
