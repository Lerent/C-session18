#include <stdio.h>
#include <string.h>

struct student {
	int id;
	char name[50];
	int age;
	char phonenumber[20];
};
int main () {
	struct student hocsinh[50];
	 for (int i = 0; i < 5; i++) {
        hocsinh[i].id = i + 1;
        printf("Nhap thong tin cho sinh vien %d:\n", hocsinh[i].id);
        printf("Nhap ten: ");
        fflush(stdin);
        fgets(hocsinh[i].name, sizeof(hocsinh[i].name), stdin);
        hocsinh[i].name[strcspn(hocsinh[i].name, "\n")] = '\0';
        printf("Nhap tuoi: ");
        scanf("%d", &hocsinh[i].age);
        printf("Nhap so dien thoai: ");
        fflush(stdin);
        fgets(hocsinh[i].phonenumber, sizeof(hocsinh[i].phonenumber), stdin);
        hocsinh[i].phonenumber[strcspn(hocsinh[i].phonenumber, "\n")] = '\0';

        printf("\n");
    }
    printf("\nThong tin cua cac sinh vien:\n");
    for (int i = 0; i < 5; i++) {
        printf("ID Sinh vien %d:\n", hocsinh[i].id);
        printf("Ten sinh vien: %s\n", hocsinh[i].name);
        printf("Tuoi sinh vien: %d\n", hocsinh[i].age);
        printf("So dien thoai: %s\n\n", hocsinh[i].phonenumber);
    }

    return 0;
}

