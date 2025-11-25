#include <stdio.h>
#include <math.h>
void chinhphuong() 
{
    int x; 
    int i;
    int phai = 0; 
    printf("Nhập số nguyên dương: ");
    scanf("%d", &x);
    if (x < 0) 
    {
        printf("%d không phải là số chính \n", x);
        return; 
    }
    if (x == 0 || x == 1) {
        printf("%d là số chính phương.\n", x);
        return;
    }
    for (i = 1; i * i <= x; i++) 
    {
        if (i * i == x) 
        {
            phai = 1; 
            break;               

        }
    }
    if (phai)
     {
        printf("%d là số chính phương.\n", x);
     } 
    else
     {
        printf("%d không phải là số chính phương.\n", x);
     }
}
int main()
{
   //BÀI 1: TÍNH TRUNG BÌNH TỔNG CỦA CÁC SỐ TỰ NHIÊN CHIA HẾT CHO 2
   int min,max,i=min;
   printf("Nhập min:");
   scanf("%d",&min);
   printf("Nhập max:");
   scanf("%d",&max);
   float tong=0,biendem=0,trungbinh=0;
   while(i<=max)
   {
    if(i%2==0)
    {
        tong+=i;
        biendem++;
    }
    i++;
    trungbinh=tong/biendem;
   }
   printf("Trung bình tổng là %2.f ",trungbinh);
   
 //Bài 2: XÁC ĐỊNH SỐ NGUYÊN TỐ
    int x,count=0,i;
    printf("Nhập số nguyên x");
    scanf("%d",&x);
    if (x<=1)
    {
        printf("%d không phải số nguyên tố",x);
        
    }
    for(i=2;i<x;i++)
    {
        if(x%i==0)      
        {
            count++;
            break;
        }
    }
        if(count==0)
        {
            printf("%d là số nguyên tố\n",x);
        }
        else
        {
            printf("%d không phải số nguyên tố",x);
        }
        printf("  ");
    while(getchar() != '\n'); 
    getchar();
    //bai 3 so chinh phuong
   chinhphuong();
   printf("Nhấn Enter để thoát...");
    while (getchar() != '\n');
    getchar();                 
   
    return 0;
}