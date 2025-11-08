#include<stdio.h>
int main()
    {
        float a,b,nhan,chia;
        printf("nhap 2 so thuc: ");
        scanf("%f %f",&a,&b);
        printf("xuat 2 so thuc %f %f",a,b);
        nhan= a*b;
        chia= a/b;
        printf("nhap 2 so thuc %.2f", nhan );
        printf("nhap 2 so thuc %.2f", chia );
        return 0;
    }
    