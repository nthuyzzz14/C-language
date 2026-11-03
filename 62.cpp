#include <stdio.h>

struct Diem{
	int x[60];
	int y[30];
	char h[40];
};

typedef struct Diem D;

int main (){
	D z;
		scanf("%d", z.x);
			getchar();
	gets(z.h);
		scanf("%d", z.y);
	printf("%d %s %d", z.x, z.h, z.y);
	
	return 0;
}
