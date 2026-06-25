#include <stdio.h>
struct Item {
    int id;
    char name[50];
    int qty;
    float price;
};

int main() {
    struct Item inv[50];
    int n, i;

    printf("Enter number of items: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter id, name, qty, price: ");
        scanf("%d %s %d %f", &inv[i].id, inv[i].name, &inv[i].qty, &inv[i].price);
    }

    printf("\n--- Inventory Records ---\n");
    for (i = 0; i < n; i++) {
        printf("ID: %d, Name: %s, Qty: %d, Price: %.2f, Total Value: %.2f\n",
               inv[i].id, inv[i].name, inv[i].qty, inv[i].price, inv[i].qty*inv[i].price);
    }
    return 0;
}