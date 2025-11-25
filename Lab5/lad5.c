#include <stdio.h>

// Bài 1: Tìm giá trị lớn nhất trong 3 số
int timGiaTriLonNhat(int so1, int so2, int so3) {
    int max = so1; 
    if (so2 > max) {
        max = so2; 
    }
    if (so3 > max) {
        max = so3; 
    }
    return max; 
}

// Bài 2: Kiểm tra năm nhuận
int checkYear(int year) {
    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
        return 1; // năm nhuận
    }
    return 0; // không phải năm nhuận
}

// Bài 3: Kiểm tra số chia hết cho 5 và 9
void checkDivisible(int n) {
    if (n < 1 || n > 1000) {
        printf("So khong nam trong khoang [1,1000]\n");
    } else {
        if (n % 5 == 0 && n % 9 == 0) {
            printf("%d chia het cho ca 5 va 9\n", n);
        } else {
            printf("%d KHONG chia het cho ca 5 va 9\n", n);
        }
    }
}

int main() {
    // Bài 1
    int a, b, c;
    printf("Nhập số thứ nhất (a): ");
    scanf("%d", &a);
    printf("Nhập số thứ hai (b): ");
    scanf("%d", &b);
    printf("Nhập số thứ ba (c): ");
    scanf("%d", &c);

    int ketQua = timGiaTriLonNhat(a, b, c);
    printf("\n Số lớn nhất trong 3 số %d, %d, và %d là: %d\n", a, b, c, ketQua);

    // Bài 2
    int namNhap;
    printf("\n Nhập vào năm cần kiểm tra: ");
    scanf("%d", &namNhap);

    if (checkYear(namNhap)) {
        printf("Năm %d là năm nhuận.\n", namNhap);
    } else {
        printf("Năm %d KHÔNG phải là năm nhuậnnhuận.\n", namNhap);
    }

    // Bài 3
    int soNhap;
    printf("\n Nhập vào một số trong khoảng [1,1000]: ");
    scanf("%d", &soNhap);

    checkDivisible(soNhap);

    return 0;
}

