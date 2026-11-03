#include <stdio.h>

struct hocsinh{
	char ten[50];
	double diem;
};

typedef  struct hocsinh hs;
//ham nhap con tro
void nhap(hs *x){
	gets(x->ten);
	scanf("%lf", &x->diem);
}

//ham nhap thuong 
hs nhapthuong(){
	hs b;
	gets(b.ten);
	scanf("%lf", &b.diem);
	return b;
}

void in(hs b){
	printf("%s %.2lf", b.ten,b.diem);
}

int main(){
	hs b;
	nhapthuong(&b);
	in(b);
	
}
