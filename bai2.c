/******************************************************************************
 * Họ và tên: [Huỳnh Khánh Nam]
 * MSSV:      [PS43500]
 * Lớp:       [COM108 - CS21302]
 *****************************************************************************/

//  BÀI 2: TÌM GIÁ TRỊ LỚN NHẤT VÀ NHỎ NHẤT TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình giá trị nhỏ nhất và lớn nhất của mảng

// VIẾT CODE Ở ĐÂY
#include <stdio.h>

int findMaxMin(int arr[], int n, int *MAX, int *MIN) {
    *MAX = arr[0];
    *MIN = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > *MAX) {
            *MAX = arr[i];
        }
        if (arr[i] < *MIN) {
            *MIN = arr[i];
        }
    }
    return 0;
}

int main() {
    int n;
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int MAX, MIN;
    findMaxMin(arr, n, &MAX, &MIN);

    printf("Gia tri lon nhat trong mang: %d\n", MAX);
    printf("Gia tri nho nhat trong mang: %d\n", MIN);

    return 0;
}

    printf("Gia tri lon nhat trong mang: %d\n", MAX);
    printf("Gia tri nho nhat trong mang: %d\n", MIN);

    return 0;
}
