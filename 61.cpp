#include <stdio.h>

struct Hocsinh{
	char ten[50];
	char lop[10];
	char dia_chi[50];
	float gpa;
};

typedef struct Hocsinh HS;

int main(){
	HS a;
	scanf("%s %s", a.ten, a.dia_chi);
	getchar();
	scanf("%s %f",a.lop, &a.gpa);
		printf("%s %s %s %.2f", a.ten, a.dia_chi, a.lop, a.gpa);
	
	HS b = a;
		printf("\n");
		printf("%s %s %s %.2f", b.ten, b.dia_chi, b.lop, b.gpa);
	return 0;
}
