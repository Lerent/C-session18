#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};
void sapxep(struct Student hocsinh[], int length) {
    struct Student temp;
    for (int i = 0; i < length - 1; i++) {
        for (int j = i + 1; j < length; j++) {
            if (strcmp(hocsinh[i].name, hocsinh[j].name) > 0) {
                temp = hocsinh[i];
                hocsinh[i] = hocsinh[j];
                hocsinh[j] = temp;
            }
        }
    }
}
int main() {
    struct Student hocsinh[5] = {
        {1, "C", 23, "0123456789"},
        {2, "A", 21, "0987654321"},
        {3, "B", 22, "0345678912"},
        {4, "D", 19, "0567891234"},
        {5, "E", 43, "0789123456"}
    };
    int currentLength = 5;
    printf("Danh sach sinh vien ban dau:\n");
    for (int i = 0; i < currentLength; i++) {
        printf("ID: %d, Ten: %s, Tuoi: %d, SDT: %s\n", 
               hocsinh[i].id, hocsinh[i].name, hocsinh[i].age, hocsinh[i].phoneNumber);
    }
    sapxep(hocsinh, currentLength);
    printf("\nDanh sach sinh vien sau khi sap xep theo ten:\n");
    for (int i = 0; i < currentLength; i++) {
        printf("ID: %d, Ten: %s, Tuoi: %d, SDT: %s\n", 
               hocsinh[i].id, hocsinh[i].name, hocsinh[i].age, hocsinh[i].phoneNumber);
    }

    return 0;
}

