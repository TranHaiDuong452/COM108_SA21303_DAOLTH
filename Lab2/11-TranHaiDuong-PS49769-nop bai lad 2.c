#include <stdio.h>

int main()
{
    // #BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH +- 2 SỐ
    printf("\n--- BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH +- 2 SỐ ---\n");
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
    printf("\n--- BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN ---\n");
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
     printf("\n--- Bài 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN ---\n");
    float banKinh,chuviHT,dientichHT;
    const float PI = 3.14159; 
    printf("Moi ban nhap ban kinh cua hinh tron (r): ");
    scanf("%f", &banKinh);
    chuviHT = 2 * PI * banKinh;
    dientichHT = PI * banKinh * banKinh;
    printf("\n--- KET QUA ---\n");
    printf("Ban kinh hinh tron (r) vua nhap la: %.2f\n", banKinh);
    printf("Chu vi hinh tron (chuviHT) la: %.2f\n", chuviHT);
    printf("Dien tich hinh tron (dientichHT) la: %.2f\n", dientichHT);

    //#Bài 4: XÂY DỰNG CHƯƠNG TRÌNH DIEM TRUNG BINH
    printf("\n--- Bài 4: XÂY DỰNG CHƯƠNG TRÌNH DIEM TRUNG BINH ---\n");
    float toan, li, hoa, dtb;
    printf(" moi ban nhap dem toan: ");
    scanf("%f", &toan);
    printf(" moi ban nhap dem li: ");
    scanf("%f", &li);
    printf(" moi ban nhap dem hoa: ");
    scanf("%f", &hoa);
    dtb = (toan *3+ li *2 +hoa *1)/6 ;
    printf("\n--- KET QUA ---\n");
    printf("diem trung binh mon cua ban la: %.2f\n", dtb);


    //#Bài 5: XÂY DỰNG CHƯƠNG TRÌNH TINH CHU VI HINH VUONG CAN
    printf("\n--- Bài 5: XÂY DỰNG CHƯƠNG TRÌNH TINH CHU VI HINH VUONG CAN ---\n");
    float a,b,canhhuyen,cvtg,dttg;
    printf("Nhap goc vuong 1 cua tam giac");
    scanf("%f",&a);
    printf("Nhap goc vuong 2 cua tam giac");
    scanf("%f",&b);
    printf("Nhap canh huyen");
    scanf("%f",&canhhuyen);
    cvtg = a + b +canhhuyen;
    dttg = 1/2 * a * b;
    printf("\n--- KET QUA ---\n");
    printf("Chu vi hinh tam giac la %f",cvtg);
    printf("Dien tich hinh tam giac la %f",dttg);
    return 0;

}