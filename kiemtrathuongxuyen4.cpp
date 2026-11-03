#include <stdio.h>
#include <string.h>
#include <ctype.h>

void xoaKyTu(char s[], char ch) {
    int i, j = 0;
    int n = strlen(s);

    for (i = 0; i < n; i++) {
        if (tolower(s[i]) != tolower(ch)) {
            s[j] = s[i];
            j++;
        }
    }
    s[j] = '\0'; 
}

int main() {
    char s[101];
    char ch;

    printf("Nhap chuoi (toi da 100 ky tu): ");
    fgets(s, sizeof(s), stdin);

    s[strcspn(s, "\n")] = '\0';

    printf("Chuoi vua nhap: %s\n", s);

   
    printf("Nhap ky tu can xoa: ");
    scanf("%c", &ch);

    
    xoaKyTu(s, ch);

    printf("Chuoi sau khi xoa: %s\n", s);

    return 0;
}
