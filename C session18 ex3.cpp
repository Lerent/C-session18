#include <stdio.h>
#include <string.h>

struct student {
    char name[50];
    int age;
    char phoneNumber[20];
};
int main() {
    struct student hocsinh[5];
    for (int i = 0; i < 5; i++) {
        printf("Nhap thong tin sinh vien %d:\n", i + 1);
        printf("Nhap ten: ");
        fflush(stdin);
        fgets(hocsinh[i].name, sizeof(hocsinh[i].name), stdin);
        hocsinh[i].name[strcspn(hocsinh[i].name, "\n")] = '\0';
        printf("Nhap tuoi: ");
        scanf("%d", &hocsinh[i].age);
        printf("Nhap so dien thoai: ");
        fflush(stdin);
        fgets(hocsinh[i].phoneNumber, sizeof(hocsinh[i].phoneNumber), stdin);
        hocsinh[i].phoneNumber[strcspn(hocsinh[i].phoneNumber, "\n")] = '\0';

        printf("\n");
    }
    printf("\nThong tin cua cac sinh vien:\n");
    for (int i = 0; i < 5; i++) {
        printf("Sinh vien %d:\n", i + 1);
        printf("Ten: %s\n", hocsinh[i].name);
        printf("Tuoi: %d\n", hocsinh[i].age);
        printf("So dien thoai: %s\n\n", hocsinh[i].phoneNumber);
    }

    return 0;
}

