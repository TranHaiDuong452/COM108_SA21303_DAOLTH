#include <stdio.h>
#include <stdio.h>
int main()
{
    printf("Bài 1: XÂY DỰNG CHƯƠNG TRÌNH TÍNH HỌC LỰC \n");
      printf(" a. 52\n b. 53\n c. 54\n d. 55\n ");
      printf("Xin chọn đáp án (a, b, c, d)");
      char tinh;
      switch (tinh)
      {
        case 'tinh': 
                double dtb;
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
}