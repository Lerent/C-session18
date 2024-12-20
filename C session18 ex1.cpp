#include <stdio.h>

struct student {
    char name[50];
    int age;
    char phoneNumber[20];
};
int main()
{
    struct student hocsinh = {"Nguyen Tuan Minh",18,"0123456789"};
    printf("Thong tin sinh vien:\n");
    printf("Name: %s\n", hocsinh.name);
    printf("Age: %d\n", hocsinh.age);
    printf("Phone Number: %s\n", hocsinh.phoneNumber);

    return 0;
}

