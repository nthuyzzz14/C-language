#include <stdio.h>

struct date{
	int ngay,thang,nam;
};

struct hour{
	int gio,phut,giay;
};

struct Ve_phim{
	date ngay_xem;
	hour gio_xem;
	char ten_phim[50];
	double gia_ve;
};

typedef struct Ve_phim ve;

int main (){
	ve a;
	//a.ten_phim;
	printf("Nhap ten phim: ");
		gets(a.ten_phim);
	//a.gia_ve;
	printf("Nhap gia ve: ");
		scanf("%lf",&a.gia_ve);
			getchar();
	//a.ngay_xem.ngay;
	printf("Nhap thoi gian chieu phim: ");
		scanf(" %d %d %d %d", &a.gio_xem.gio, &a.ngay_xem.ngay, &a.ngay_xem.thang, &a.ngay_xem.nam);
	
	//xuat 
	printf("\nCHI TIET VE DUOC DAT");
	printf("\n");
	printf("\nTen phim la: %s", a.ten_phim);
	printf("\nGia ve la: %.2lf nghin dong", a.gia_ve);
	printf("\nThoi gian chieu: %d gio, ngay %d, thang %d, nam %d !", a.gio_xem.gio, a.ngay_xem.ngay, a.ngay_xem.thang, a.ngay_xem.nam);
	
	return 0;
}
