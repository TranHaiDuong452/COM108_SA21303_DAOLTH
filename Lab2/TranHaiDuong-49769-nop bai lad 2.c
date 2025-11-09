#include <stdio.h>

int main()
{
    // #BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH +- 2 SỐ

    int x, y; 
    int tong, hieu;
    printf("Nhap so nguyen x: ");
    scanf("%d", &x);
    printf("Nhap so nguyen y: ");
    scanf("%d", &y);
    tong = x + y;
    hieu = x - y;
    printf("\n--- KET QUA ---\n");
    printf("Tong cua %d va %d la: %d\n", x, y, tong);
    printf("Hieu cua %d va %d la: %d\n", x, y, hieu);

    // #BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN
    float cd, cr, cv, dt;
    printf("Nhap chieu dai\n");
    scanf("%f", &cd);
    printf("Nhap chieu rong\n");
    scanf("%f", &cr);
    cv = (cd + cr) * 2;
    dt = cd * cr;
    printf("\n--- KET QUA ---\n");
    printf("Chu vi la %f\n", cv);
    printf("Dien tich la %f\n", dt);
    

    //#Bài 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN
    float banKinh,chuviHT,dientichHT;         // Bán kính hình tròn
    const float PI = 3.14159; 
    printf("Moi ban nhap ban kinh cua hinh tron (r): ");
    scanf("%f", &banKinh);
    chuviHT = 2 * PI * banKinh;
    dientichHT = PI * banKinh * banKinh;
    printf("\n--- KET QUA ---\n");
    printf("Ban kinh hinh tron (r) vua nhap la: %.2f\n", banKinh);
    printf("Chu vi hinh tron (chuviHT) la: %.2f\n", chuviHT);
    printf("Dien tich hinh tron (dientichHT) la: %.2f\n", dientichHT);
    
    return 0;

}