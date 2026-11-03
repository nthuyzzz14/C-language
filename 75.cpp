#include <stdio.h>

void nhap_mang(int a[], int x){
	printf("NHAP CHI SO MANG CHO TUNG PHAN TU");
	
	for (int i = 0; i <= x-1; i++){
		printf("\na[%d] = ", i);
		scanf("%d", &a[i]);
	}
}

void xuat_mang(int a[], int z){
	printf("MANG VUA NHAP LA: ");
	for (int i = 0; i < z; i++){
		printf("\n%d", a[i]);
	}	
}

int kiemTraSNT(int h){
	if(h < 2)
		return 0;
		
	for (int i = 2; i * i <= h; i++){
		if (h % i == 0)
			return 0;
	}
	return 1;
}

 void tachSNT(int a[], int n, int b[], int *m){
 	*m = 0;
 	for (int i = 0; i < n; i++){
 		if(kiemTraSNT(a[i])){
 			b[*m] = a[i];
 			(*m)++;
		 }
	 }
	 printf("So nguyen to tim duoc: %d\n", m);
 }
 
 void tachMang(int a[], int n, int b[], int c[], int *nb, int *nc){
 	*nb = 0;
 	*nc = 0;
 	for (int i = 0; i < n; i++){
 		if(a[i] > 0){
 			b[*nb] = a[i];
 			(*nb)++;
		 }
		 else {
		 	c[*nc] = a[i];
		 	(*nc)++;
		 }
	 }
 }
 
 void sxGiam(int a[], int n){
 	for (int i = 0; i < n-1; i++){
 		for (int j = i+1; j < n; j++){
 			if (a[i] < a[j]){
 				int temp = a[j];
 				a[j] = a[i];
 				a[i] = temp;
			 }
		 }
	 }
 }
 
void kiemtratheoDK(int a[], int n){
	for(int i = 0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			if (a[i] == 0){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
			else if((a[i] > 0) && (a[j] > 0) && (a[i] < a[j])){
				int temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
			else if((a[i] < 0) && (a[j] < 0) && (a[i] > a[j])){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

int main(){
	int n;
	printf("Nhap so luong mang: ");
		scanf("%d", &n);
	int m;
	int b[n];
	int a[n];
	int c[n];
	int nb;
	int nc;
	
	nhap_mang(a, n);
	
	xuat_mang(a, n);
		
	tachSNT(a, n, b, &m);
		
	tachMang(a, n, b , c, &nb, &nc);
		
	sxGiam(a, n);
		
	kiemtratheoDK(a, n);
	
	printf("%p", m);	
}
