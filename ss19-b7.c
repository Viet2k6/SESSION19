#include <stdio.h>
#include <string.h>

typedef struct Sinhvien {
    int id;
    char name[50];
    int age;
    char phone[50];
} sinhvien;

void xoa(sinhvien *std, int *addindex, int *length) {
    for (int i = *addindex - 1; i < *length - 1; i++) {
        std[i] = std[i + 1];
    }
    (*length)--;
}
void print(sinhvien *std, int *length) {
    for (int i = 0; i < *length; i++) {
        printf("Id: %d\n", std[i].id);
        printf("Ten: %s\n", std[i].name);
        printf("Tuoi: %d\n", std[i].age);
        printf("Phone: %s\n", std[i].phone);
        printf("----------------------\n");
    }
}

int main() {
    int addindex, length = 5;
    sinhvien user[5] = {
        {1, "Tran Dang Viet", 18, "0123456789"},
        {2, "Dang Tuan Minh", 18, "0123456788"},
        {3, "Dinh Dinh Thanh", 18, "0123456787"},
        {4, "Thieu Tien Dung", 18, "0123456786"},
        {5, "Tran Thi Thu Trang", 18, "0123456785"},
    };

    print(user, &length);
    printf("Nhap vi tri muon xoa: ");
    scanf("%d", &addindex);

    if (addindex < 1 || addindex > length) {
        printf("Vi tri xoa khong hop le.\n");
        return 1;
    }

    xoa(user, &addindex, &length);
    print(user, &length);

    return 0;
}
