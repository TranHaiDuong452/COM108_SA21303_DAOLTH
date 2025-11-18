#include <stdio.h>
#include <math.h>
int main()
{
    /*int n, s=0;
    printf("nhap n:");
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        if(i%2)
        {
            s+=i;
        }
    }
    printf("tong so le: %d",s);


    int min,max;
    int i=min;
    printf("nhap min:");
    scanf("%d",&min);
    printf("nhap max: ");
    scanf("%d",&max);
    float tong =0,biendem=0,trungbinh=0;
    while (i<=max)
    {
        if(i%2==0)
        {
            tong+=i;
            biendem++;
        }
        i++;
        trungbinh=tong/biendem;
    }
    printf("ket qua: %2.f ",trungbinh);*/
    int x,count=0,i;
    printf("Nhap so nguyen to x  ");
    scanf("%d",&x);
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
            count++;
            break;
        }
        if(count==0)
        {
            printf("x la so nguyen to");
        }
        else
        {
            printf("x khong phai so nguyen to");
        }
        i++;
    }
   return 0;
}