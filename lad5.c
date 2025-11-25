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

// Bài 3: Hoán vị 2 số
void swap(int *a, int *b) {
    int temp; 
    temp = *a; 
    *a = *b; 
    *b = temp; 
}

int main() {
    // Bài 1
    int a, b, c;
    printf("Nhap so thu nhat (a): ");
    scanf("%d", &a);
    printf("Nhap so thu hai (b): ");
    scanf("%d", &b);
    printf("Nhap so thu ba (c): ");
    scanf("%d", &c);

    int ketQua = timGiaTriLonNhat(a, b, c);
    printf("\nSo lon nhat trong 3 so %d, %d, va %d la: %d\n", a, b, c, ketQua);

    // Bài 2
    int namNhap;
    printf("\nNhap vao nam can kiem tra: ");
    scanf("%d", &namNhap);

    if (checkYear(namNhap)) {
        printf("Nam %d la nam nhuan.\n", namNhap);
    } else {
        printf("Nam %d KHONG phai la nam nhuan.\n", namNhap);
    }

    // Bài 3
    int soA, soB;
    printf("\nNhap vao gia tri so A: ");
    scanf("%d", &soA);
    printf("Nhap vao gia tri so B: ");
    scanf("%d", &soB);

    printf("\nTruoc khi hoan vi:\n");
    printf("A = %d, B = %d\n", soA, soB);
    swap(&soA, &soB);
    printf("\nSau khi hoan vi:\n");
    printf("A = %d, B = %d\n", soA, soB);

    return 0;
}