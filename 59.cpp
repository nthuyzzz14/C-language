#include <stdio.h>
#include <string.h>
void chuyenuppertext(char a[], char a1[]){
	
	//sao cheo chuoi goc de xu ly chuoi vua duoc sao chep
	strcpy(a1,a);
	
	//duyet tung ky tu
	for(int i = 0; a1[i] != '\0'; i++){
		if(a1[i] >= 'a' && a1[i] <= 'z'){
			a1[i] = a1[i] - 32;
		}
	}
}

int main(){
	char a[100];
	char a1[100];
	
	printf("Nhap chuoi: ");
	gets(a);
	
	chuyenuppertext(a, a1);
	
	printf("Chuoi luc dau: %s\n", a);
	printf("Chuoi duoc xu ly: %s", a1);
	
	return 0;
}
