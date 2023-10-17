#include <stdio.h>
#include <stdlib.h>

void displayMenu() {
    printf("****** Food Menu ******\n");
    printf("Item (1) Burger - 70.00\n");
    printf("Item (2) Pizza - 100.00\n");
    printf("Item (3) Sandwich - 40.00\n");
    printf("Item (4) Fries - 30.00\n");
    printf("Item (5) Dhokla - 50.00\n");
    printf("Item (6) Manchurian - 90.00\n");
    printf("Item (7) MoMos - 60.00\n");
    printf("Item (8) Fafda - 80.00\n");
    printf("Item (9) Exit\n");
    printf("***********************\n");
}
int main() {
    int choice, quantity;
    double totalBill = 0.0;
    do {
        displayMenu();
        printf("Enter your choice you like to order (1-9): ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter quantity: ");
                scanf("%d", &quantity);
                totalBill += quantity * 70.00;
                break;
            case 2:
                printf("Enter quantity: ");
                scanf("%d", &quantity);
                totalBill += quantity * 100.00;
                break;
            case 3:
                printf("Enter quantity: ");
                scanf("%d", &quantity);
                totalBill += quantity * 40.00;
                break;
            case 4:
                printf("Enter quantity: ");
                scanf("%d", &quantity);
                totalBill += quantity * 30.00;
                break;
            case 5:
                printf("Enter quantity: ");
                scanf("%d", &quantity);
                totalBill += quantity * 50.00;
                break;
            case 6:
                printf("Enter quantity: ");
                scanf("%d", &quantity);
                totalBill += quantity * 90.00;
                break;
            case 7:
                printf("Enter quantity: ");
                scanf("%d", &quantity);
                totalBill += quantity * 60.00;
                break;
            case 8:
                printf("Enter quantity: ");
                scanf("%d", &quantity);
                totalBill += quantity * 80.00;
                break;
            case 9:
                break;
            default:
                printf("Invalid choice. Please choose a valid option.\n");
        }
        printf("Total Bill: %.2lf\n", totalBill);
        char more;
        printf("Do you want to order more? (y/n): ");
        scanf(" %c", &more);
        if (more != 'y' && more != 'Y') {
            break;
        }
    } while (choice != 9);
    printf("Thank you for ordering. Your total bill is: %.2lf\n", totalBill);
    return 0;
}

