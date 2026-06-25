#include <stdio.h>
struct Ticket {
    int id;
    char name[50];
    char destination[50];
    int seats;
};

int main() {
    struct Ticket t[50];
    int n, i;

    printf("Enter number of bookings: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter booking id, name, destination, seats: ");
        scanf("%d %s %s %d", &t[i].id, t[i].name, t[i].destination, &t[i].seats);
    }

    printf("\n--- Ticket Bookings ---\n");
    for (i = 0; i < n; i++) {
        printf("ID: %d, Name: %s, Destination: %s, Seats: %d\n",
               t[i].id, t[i].name, t[i].destination, t[i].seats);
    }
    return 0;
}