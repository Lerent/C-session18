#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};
int findStudent(struct Student hocsinh[], int size, int id) {
    for (int i = 0; i < size; i++) {
        if (hocsinh[i].id == id) {
            return i;
        }
    }
    return -1;
}
int main() {
    struct Student hocsinh[50] = {
        {1, "anh A", 18, "0123456789"},
        {2, "anh B", 35, "9876543210"},
        {3, "chi C", 22, "0123456798"},
        {4, "chi D", 15, "0567991234"},
        {5, " ong E", 63, "0999888777"}
    };
    int size = 5;
    int Find;
    printf("Nhap ID cua sinh vien can chinh sua: ");
    scanf("%d", &Find);
    int index = findStudent(hocsinh, size, Find);
    if (index == -1) {
        printf("Khong tim thay sinh vien voi ID = %d.\n", Find);
    } else {
        printf("\nThong tin sinh vien truoc khi chinh sua:\n");
        printf("ID hoc sinh: %d\n", hocsinh[index].id);
        printf("Ten hoc sinh: %s\n", hocsinh[index].name);
        printf("Tuoi hoc sinh: %d\n", hocsinh[index].age);
        printf("So dien thoai: %s\n\n", hocsinh[index].phoneNumber);
        printf("Hay nhap ten moi: ");
        getchar();
        fgets(hocsinh[index].name, sizeof(hocsinh[index].name), stdin);
        hocsinh[index].name[strcspn(hocsinh[index].name, "\n")] = '\0';
        printf("Hay nhap tuoi moi: ");
        scanf("%d", &hocsinh[index].age);
        printf("\nChinh sua thong tin thanh cong!\n");
    }
    printf("\nThong tin cua tat ca sinh vien:\n");
    for (int i = 0; i < size; i++) {
        printf("Sinh vien %d:\n", hocsinh[i].id);
        printf("Ten: %s\n", hocsinh[i].name);
        printf("Tuoi: %d\n", hocsinh[i].age);
        printf("So dien thoai: %s\n\n", hocsinh[i].phoneNumber);
    }

    return 0;
}

