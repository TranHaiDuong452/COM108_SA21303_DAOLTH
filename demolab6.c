/* #include<stdio.h>
int main()
{
    int a[2][2];
    printf("nhap so dai mang: ");
    scanf("%d",&a);
    for (int i = 0; i<2;i++)
    {
        for (int y = 0; y<2;y++)
    {
        printf("nhap phan tu a [%d] [%d]  ", y,i);
        scanf("%d", &a[y][i]);
    }
       
    }
    printf("xuat: ");
    for (int j=0;j<5;j++ )
    {
        for (int o=0;o<5;o++ )
    {
        printf("%d",a[j][o]);

    }
    printf("\n");
       

    }
    return 0;
}
    */
  #include <stdio.h>

int main() {
    int n;
    printf("Nhap chieu cao tam giac: ");
    scanf("%d", &n);

    char a[n][n]; // mảng 2 chiều

    // Gán giá trị vào mảng
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j <= i) {
                a[i][j] = '*';   // phần tam giác
            } else {
                a[i][j] = ' ';   // khoảng trắng
            }
        }
    }

    // Xuất mảng ra màn hình
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%c ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}