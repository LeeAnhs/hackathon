#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int arr[100];
    int luachon;
    int max;
    int i, n = 0;

    do {
        printf("1. Nhap so phan tu muon nhap va gia tri muon nhap\n");
        printf("2. In ra phan tu hien co\n");
        printf("3. In ra gia tri lon nhat\n");
        printf("4. In ra phan tu la so nguyen to\n");
        printf("5. Them 1 phan tu vao mang\n");
        printf("6. Xoa 1 phan tu trong mang\n");
        printf("7. Sap xep theo thu tu tang dan\n");
        printf("8. Tim kiem phan tu va in ra gia tri\n");
        printf("9. Thoat\n");
        printf("Enter your number: ");
        scanf("%d", &luachon);

        if (luachon == 1) {
            printf("Nhap so phan tu muon nhap: ");
            scanf("%d", &n);
            for (i = 0; i < n; i++) {
                printf("Nhap cac gia tri vao phan tu: ");
                scanf("%d", &arr[i]);
            }
        } else if (luachon == 2) {
            printf("Cac phan tu hien dang quanly:\n");
            for (i = 0; i < n; i++) {
                printf("%d\n", arr[i]);
            }
            printf("\n");
        } else if (luachon == 3) {
            if (n > 0) {
                max = arr[0];
                for (i = 1; i < n; i++) {
                    if (arr[i] > max) {
                        max = arr[i];
                    }
                }
                printf("Phan tu lon nhat la: %d\n", max);
            } 
        } else if (luachon == 4) {
            printf("Cac phan tu la so nguyen to:\n");
            for (i = 0; i < n; i++) {
                if (isPrime(arr[i])) {
                    printf("%d\n", arr[i]);
                }
            }
        } else if (luachon == 5) {
            int vitri, giatri;
            printf("Nhap vi tri muon them (0 to %d): ", n);
            scanf("%d", &vitri);
            if (vitri < 0 || vitri > n) {
                printf("Khong hop le\n");
            } else {
                printf("Nhap gia tri: ");
                scanf("%d", &giatri);
                for (i = n; i > vitri; i--) {
                    arr[i] = arr[i - 1];
                }
                arr[vitri] = giatri;
                n++;
            }
        } else if (luachon == 6) {
            printf("Nhap vi tri muon xoa (1 to %d): ", n);
            int vitri;
            scanf("%d", &vitri);
            if (vitri < 1 || vitri > n) {
                printf("Khong hop le\n");
            } else {
                for (i = vitri - 1; i < n - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                n--;
            }
        } else if (luachon == 7) {
            printf("Sap xep cac phan tu tang dan\n");
            int min;
            for (int i = 0; i < n - 1; i++) {
                min = i;
                for (int j = i + 1; j < n; j++) {
                    if (arr[min] > arr[j]) {
                        min = j;
                    }
                }
                int temp = arr[min];
                arr[min] = arr[i];
                arr[i] = temp;
            }
        } else if (luachon == 8) {
            printf("Tim kiem phan tu\n");
            printf("Nhap vao phan tu muon tim kiem: ");
                        int vitri = -1;
            int number;
            scanf("%d", &number);
            for (int i = 0; i < n; i++) {
                if (arr[i] == number) {
                    vitri = i;
                    break; // Stop searching once the element is found
                }
            }
            if (vitri == -1) {
                printf("Khong tim thay phan tu\n");
            } else {
                printf("Vi tri cua %d trong mang la: %d\n", number, vitri);
            }
        } else {
            printf("Finish\n");
            break;
        }
    } while (luachon != 9);

    return 0;
}
