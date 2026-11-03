#include <stdio.h>

int main(){
	float dai, rong;
	float dienTich, chuVi;
	
	//nhap du lieu (input)
	printf("Nhap chieu dai: ");
	scanf("%f", &dai);
	printf("Nhap chieu rong: ");
	scanf("%f", &rong);
	
	// kiem tra dieu kien 
	if ( dai <= 0 || rong <= 0){
		printf("Chieu dai va chieu rong phai lon hon 0 !!!!!");
	} else {
		// cong thuc tinh dien tich va chu vi
		dienTich = dai * rong;
		chuVi = 2 * (dai + rong);
		
		//xuat ket qua (output)
		printf("Dien tich cua hinh chu nhat la: %.3f\n", dienTich);
		printf("Chu vi cua hinh chu nhat la: %.3f", chuVi);
	}
	return 0;
}
