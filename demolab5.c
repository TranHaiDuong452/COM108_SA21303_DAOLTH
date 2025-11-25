#include <stdio.h>
#include<math.h>


int main() {
    int a, b, c,max,min;
    printf("nhap a: ");
    scanf("%d", &a);
     printf("nhap b: ");
    scanf("%d", &b);
     printf("nhap c: ");
    scanf("%d", &c);
     printf("Cho ba so a = %d, b = %d, c = %d\n", a, b, c);
    if(a>b)  a,b=max; c=min;
    if(a<b)  a,b=min ; c=max;

   
    printf("Gia tri lon nhat (Max) la: %d\n", max);
    printf("Gia tri nho nhat (Min) la: %d\n", min);

    double  x=-7.0;
    double ketqua=fabs(x);
    printf("Bai gia tri tuyet doi \n");
    printf(" ketqua x=|-7|=%.2f \n", ketqua);
    return 0;
}