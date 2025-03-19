#include <stdio.h>
#include "functions.h"
void menu()
{

    printf("\n***Menu chuong trinh***\n");
    printf("1.In so le tu 1 den n. \n");
    printf("2.Doi vi tri 2 so a va b. \n");
    printf("3.Kiem tra so nguyen duong. \n");
    printf("4.Tinh giai thua so nguyen duong n. \n");
    printf("5.Tim uoc chung lon nhat cua 2 so nguyen duong. \n");
    printf("0.Thoat chuong trinh.\n");
}
int main(void)
{
    int choice, n, a, b;

    do
    {
        menu();
        // printf("\n");
        // printf("***Menu chuong trinh***\n");
        // printf("1.In so le tu 1 den n. \n");
        // printf("2.Doi vi tri 2 so a va b. \n");
        // printf("3.Kiem tra so nguyen duong. \n");
        // printf("4.Tinh giai thua so nguyen duong n. \n");
        // printf("5.Tim uoc chung lon nhat cua 2 so nguyen duong. \n");
        // printf("0.Thoat chuong trinh.");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Ban da chon in so tu 1 den n\n");
            printf("Nhap so n:");
            scanf("%d", &n);
            printf("So le tu 1 den %d: \n", n);
            insole(n);
            break;
        case 2:
            nhaphaisoduong(&a, &b);
            Doivitri(&a, &b);
            printf("Hai so sau khi doi vi tri: a=%d b=%d", a, b);
            break;
        case 3:
            printf("Nhap mot so: ");
            scanf("%d", &a);
            if (ktrsonguyenduong(a))
                printf("%d la so nguyen duong.\n", a);
            else
                printf("%d khong phai la so nguyen duong.\n", a);
            break;
        case 4:
            printf("Nhap mot so: ");
            scanf("%d", &a);
            printf("Giai thua cua %d la: %d", a, giaithua(a));
            break;
        case 5:
            printf("Nhap 2 so nguyen duong: ");
            scanf("%d %d", &a, &b);
            printf("Uoc chung lon nhat cua 2 so nguyen duong:%d ", ucln(a, b));
        case 0:
            printf("Thoat chuong trinh.\n");
            break;
        default:
            printf("Lua chon khong hop le. Vui long thu lai!\n");
        }
    } while (choice != 0);
    return 0;
} 
// ahsdiasia