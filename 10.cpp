#include <stdio.h>
#include <math.h>

int main() {
    double x;

    printf("Nhap mot so: ");
    scanf("%lf", &x);

    if (x < 0) {
        printf("Khong the tinh can bac hai cua so am.\n");
    } else {
        printf("Can bac hai cua %.2lf la: %.2lf\n", x, sqrt(x));
    }

    return 0;
}
