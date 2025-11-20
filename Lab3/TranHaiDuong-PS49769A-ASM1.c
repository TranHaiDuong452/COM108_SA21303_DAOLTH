#include <stdio.h>

int main() {

    int chon;

    do {
        // ---ASM-1 Trần Hữu Dương ---
        printf("-----ASM-1 Trần Hữu Dương ----------\n");
        printf("1. Kiểm tra số nguyên: \n");
        printf("2. Tìm ước số chung và bội số chung của 2 số: \n");
        printf("3. Tính tiền cho quán karaoke: \n");
        printf("4. Tính tiền điện: \n");
        printf("5. Đổi tiền: \n");
        printf("6. Tính lãi suất vay ngân hàng, vay trả góp: \n");
        printf("7. Vay tiền mua xe: \n");
        printf("8. Sắp xếp thông tin sinh viên: \n");
        printf("9. Xây dựng game FPOLY-LOTT: \n");
        printf("10. Tính toán giải phân số: \n");
        printf("0. Thoát \n");
        printf("Nhập chức năng: ");
        scanf("%d",&chon);
        
        switch(chon) {

            case 1: { // Đã thêm {
                printf("Bạn đã chọn Kiểm tra số nguyên\n");
                // Thêm logic code cho chức năng 1 tại đây
                break;
            } // Đã thêm }
            
            case 2: {
                printf("Bạn đã chọn Tìm ước số chung và bội số chung của 2 số\n");
                // Thêm logic code cho chức năng 2 tại đây
                break;
            }

            case 3: {
                printf("Bạn đã chọn Tính tiền cho quán karaoke 3\n");
                // Thêm logic code cho chức năng 3 tại đây
                break;
            }
            
            case 4: {
                printf("Bạn đã chọn 4\n");
                break;
            }
            
            case 5: {
                printf("Bạn đã chọn 5\n");
                break;
            }

            case 6: {
                printf("Bạn đã chọn 6\n");
                break;
            }

            case 7: {
                printf("Bạn đã chọn 7\n");
                break;
            }
            
            case 8: {
                printf("Bạn đã chọn 8\n");
                break;
            }
            
            case 9: {
                printf("Bạn đã chọn 9\n");
                break;
            }
            
            case 10: {
                printf("Bạn đã chọn 10\n");
                break;
            }
            
            case 0:
                printf("Bạn đã chọn thoát! \n");
                break;
            
            default: 
                printf("Lựa chọn không hợp lệ. Vui lòng nhập lại (0-10).\n");
                break;
        }

    } while (chon != 0);

    return 0;
}