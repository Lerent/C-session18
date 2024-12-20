#include <stdio.h>

struct student {
    char name[50];
    int age;
    char phoneNumber[20];
};
int main() 
{
    struct student hocsinh;
    printf("Nhap thong tin sinh vien:\n");
    printf("Nhap ten: ");
    fgets(hocsinh.name, sizeof(hocsinh.name), stdin);
    printf("Nhap tuoi: ");
    scanf("%d", &hocsinh.age);
    getchar ();
    printf("Nhap so dien thoai: ");
    fgets(hocsinh.phoneNumber, sizeof(hocsinh.phoneNumber), stdin);
    printf("\nThong tin sinh vien vua nhap: \n");
    printf("Ten: %s\n", hocsinh.name);
    printf("Tuoi: %d\n", hocsinh.age);
    printf("So dien thoai: %s\n", hocsinh.phoneNumber);

    return 0;
}

