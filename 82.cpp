#include <stdio.h>
#include <string.h>

int demtu(char s[]){
	int count = 0;
	for(int i = 0; s[i] != '\0'; i++){
		if(s[i] != ' ' && (i == 0 || s[i-1] == ' ')){
			count++; 
		}
	}
	printf("So tu trong xau: %d", count);
	return count;
}

int main (){
	char s[101];
	printf("Nhap xau: ");
	fgets(s, sizeof(s), stdin);
	
	printf("Xau duoc nhap: %s", s);
	
	demtu(s);
	
	return 0;
}
