#include <stdio.h>
    #include <math.h>
    #include <stdlib.h>
    int main() {
        int T;

        do {
            printf("\n===== MENU =====\n");
            printf("1. Xếp loại học lực\n");
            printf("2. Giải phương trình bậc nhất\n"); 
            printf("3. Giải phương trình bậc hai\n");
            printf("4. Chương trình tính tiền điện\n");
            printf("0. Thoát chương trình\n");
            printf("Hãy nhập lựa chọn của bạn: ");
            scanf("%d", &T);

            switch (T) {

            case 1: {
                float diem;
                printf("Nhập điểm: ");
                scanf("%f", &diem);

                if (diem >= 9) {
                    printf("Xếp loại xuất sắc\n");
                } else if (diem >= 8 && diem < 9) {
                    printf("Xếp loại giỏi\n");
                } else if (diem >= 6.5 && diem < 8) {
                    printf("Xếp loại khá \n");
                } else if (diem >= 5 && diem < 6.5) {
                    printf("Xếp loại trung bình\n");
                } else if (diem >= 3 && diem < 5) {
                    printf("Xếp loại kém\n");
                }else {
                    printf("Xếp loại yếu\n");
            }

                break;
            }

            case 2: {
                float a, b;
                printf("nhập a, b: ");
                scanf("%f %f", &a, &b);

                if (a == 0) {
                    if (b == 0) printf("Vô số nghiệm\n");
                    else printf("Vô nghiệm\n");
                } else {
                    printf("Nghiệm: x = %.2f\n", -b / a);
                }
                break;
            }

            case 3: {
                float a, b, c;
                printf("Nhập a, b, c: ");
                scanf("%f %f %f", &a, &b, &c);

                if (a == 0) {
                    printf("Không phải chương trình bậc 2\n");
                } else {
                    float delta = b*b - 4*a*c;

                    if (delta < 0) printf("Vô nghiệm\n");
                    else if (delta == 0) printf("Nghiệm kép: x = %.2f\n", -b/(2*a));
                    else {
                        printf("x1 = %.2f\n", (-b + sqrt(delta)) / (2*a));
                        printf("x2 = %.2f\n", (-b - sqrt(delta)) / (2*a));
                    }
                }
                break;
            }

            case 4: {
                int kWh;
                long money = 0;
                printf("Nhập số kWh: ");
                scanf("%d", &kWh);

                if (kWh <= 50)
                    money = kWh * 1678;
                else if (kWh <= 100)
                    money = 50*1678 + (kWh-50)*1734;
                else if (kWh <= 200)
                    money = 50*1678 + 50*1734 + (kWh-100)*2014;
                else if (kWh <= 300)
                    money = 50*1678 + 50*1734 + 100*2014 + (kWh-200)*2536;
                else if (kWh <= 400)
                money = 50*1678 + 50*1734 + 100*2014 + 100*2536 + (kWh-300)*2834;
                else
                    money = 50*1678 + 50*1734 + 100*2014 + 100*2536 + 100*2834 + (kWh-400)*2927;

                printf("Tiền điện: %ld dong\n", money);
                break;
            }

            case 0:
                printf("Thoát chương trình...\n");
                break;

            default:
                printf("Lựa chọn không hợp lệ!\n");
            }

        } while (T != 0);

            return 0;
    }