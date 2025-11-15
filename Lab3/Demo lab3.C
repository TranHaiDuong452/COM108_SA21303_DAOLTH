#include <stdio.h>
#include<stdio.h>//exit 
int main()
{
   /* double dtb;
    printf("nhập điểm");
    scanf("%lf",&dtb);
    if(dtb>=9)
        {
            printf("Học Lực Xuất Sắc");
        }
        else if ( dtb < 9 && dtb >=8)
        {
            printf("Học Lực Giỏi");
        }
        else if ( dtb < 8 && dtb >=6.5)
        {
            printf("Học Lực Khá");
        }
        else if ( dtb < 6.5 && dtb >=5)
        {
            printf("Học Lực Trung Bình");
        }
        else 
        {
            printf("Học Lực Yếu ");
        }  
        
      printf("Việt Nam có bao nhiêu dân tộc anh em? \n");
      printf(" a. 52\n b. 53\n c. 54\n d. 55\n ");
      printf("Xin chọn đáp án (a, b, c, d)");
      char dapan;
      scanf ("%s", &dapan);
      switch (dapan)
      {
        case 'a': printf("bạn đã chọn sai! \n");
        break;
        case 'b': printf("bạn đã chọn sai! \n");
        break;
        case 'c': printf("bạn đã chọn đúng! \n");
        break;
        case 'd': printf("bạn đã chọn sai! \n");
        break;
      
      default: printf("bạn đã không chọn bộ đáp án! ");
        break;
      }
*//*
    double a,b,tinh;
    printf("nhap a \n");
    printf("nhap b \n");
    scanf("%lf",&a);
    scanf("%lf",&b);
    printf("\n--- KET QUA ---\n");
    if (a==0)
    {

    }
    else if(b==0)
    {
      printf("Phương trình VSN");
    }
     else if(b!=0)
    {
      printf("Phương trình Vô Nghiệm");
    }
    else
    {
      tinh=-b/a;
       printf("Chu vi hinh tam giac la %d",tinh);
    }

   float a, b;
    printf("--- Giai phuong trinh bac nhat: ax + b = 0 ---\n");
    printf("Nhap he so a: ");
    scanf("%f", &a);
    printf("Nhap he so b: ");
    scanf("%f", &b);
    printf("\nPhuong trinh cua ban la: %.2fx + %.2f = 0\n", a, b);
    if (a == 0)
    {
        if (b == 0)
      {
         
            printf("Phuong trinh Vo so nghiem (VSN).\n");
      }
         else
      {
            
            printf("Phuong trinh Vo nghiem.\n");
      }
    }
     else
    {
        float x = -b / a;
        printf("Phuong trinh co 1 nghiem duy nhat: x = %.4f\n", x);
    }
            */
    double dien,b1,b2,b3,b4,b5,b6,kq;
    printf("nhap so dien tieu thu hang thang");
    scanf("%fl", &dien);
    if (dien>0 && dien<=50)
    {
      kq=dien*1.678;
    }
    
    return 0;
}