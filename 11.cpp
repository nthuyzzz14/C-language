 #include <stdio.h>
 #include <math.h>
 
 int main(){
 	float C, F;
 	
 	// nhap du lieu C
 	printf("Nhap nhiet do C: ");
 	scanf("%f", &C);
 	
 	// chuyen tu C sang F
 	F = C * 9/5 + 32;
 	
 	// xuat ket  qua 
 	printf("Nhiet do tuong ung F: %.3f", F);
 	
 	return 0;
}
