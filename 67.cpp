#include <stdio.h>
#include <string.h>
#include <ctype.h>

void switchtype (char a[]){
	for (int i = 0; i < strlen(a); i++){
		if(islower(a[i])){
			a[i] = toupper(a[i]);
		}
		else if (isupper(a[i])){
			a[i] = tolower(a[i]);
		}
	}
}

int main(){
	char a[50];
	printf("Nhap chuoi: ");
		fgets(a, sizeof(a), stdin);
			a[strcspn(a, "\n")] = '\0';
	
	switchtype(a);
	
	printf("Chuoi sau khi xu ly: %s", a);
	
	return 0;
}
