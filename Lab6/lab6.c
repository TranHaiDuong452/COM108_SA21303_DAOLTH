#include <stdio.h>
int main() {
        int a[50],n;
        int max=a[0];
        int min=a[0];
        int temp;
        int tong =0;
        printf("Nhap n: \n");
        scanf("%d", &n);
        for(int i=0;i<n;i++)
        {
        printf("a[%d]",i);
        scanf("%d",&a[i]);
        }
        for(int i=0;i<n;i++) // xuat mang
        {
            printf("%d ",a[i]);
        }
        printf("\n");
        
          max = a[0]; // khởi tạo
        min = a[0];

        for ( int i =0;i<n;i++) // max min
            {
                if(a[i]> max)
                {
                    max=a[i];
                    printf("max mảng là: %d \n",a[i]);
                }
            }
            for ( int i =0;i<n;i++)
            {
                if(a[i]< min)
                {
                    min=a[i];
                    printf("min mảng là: %d \n",a[i]);
                }
            }
            
            for (int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(a[j]<a[i])
                    {
                        temp = a[i];
                        a[i] = a[j];
                        a[j]= temp;
                    }
                    for(int i =0;i<n;i++)
                    {
                        printf("%d ",a[i]);
                    }
                }
            }
            
            printf(" \n Các số chia hết cho 3 la: \n");
            for(int i=0;i<n;i++)
            {
                if(a[i] % 3 == 0)
                {
                    printf("%d ",a[i]);
                }
            }
            printf("\n");
            printf("Tổng các số chia hết cho 3 là: \n");
            for(int i=0;i<n;i++)
            {
                if(a[i] % 3 == 0)
                {
                    tong= tong+a[i];
                }
            }
            printf("%d",tong);
    return 0;
}