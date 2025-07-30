#include<stdio.h>

int main() {
    int choice, quantity, amount, gt = 0;
    int pizza = 180, burger = 100, dosa = 120, idli = 50;
    char choice1 = 'y'; 
    while (choice1 == 'y' || choice1 == 'Y') {
        printf("\n------------ Menu ------------");
        printf("\n 1. Pizza    - Price: 180 Rs/pcs");
        printf("\n 2. Burger   - Price: 100 Rs/pcs");
        printf("\n 3. Dosa     - Price: 120 Rs/pcs");
        printf("\n 4. Idli     - Price:  50 Rs/pcs");
        printf("\n\nPlease enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nYou have selected Pizza.");
                amount = pizza;
                break;
            case 2:
                printf("\nYou have selected Burger.");
                amount = burger;
                break;
            case 3:
                printf("\nYou have selected Dosa.");
                amount = dosa;
                break;
            case 4:
                printf("\nYou have selected Idli.");
                amount = idli;
                break;
            default:
                printf("\nInvalid choice!");
                amount = 0;
                break;
}
        if (amount != 0) {
            printf("\nEnter quantity: ");
            scanf("%d", &quantity);
            amount = amount * quantity;
            gt += amount;

            printf("\nAmount for this item = %d", amount);
            printf("\nTotal amount  = %d", gt);
        }

        printf("\n\nDo you want to place more orders? (y/n): ");
        scanf(" %c", &choice1); 
    }

    printf("\n\nFinal Bill Amount = %d", gt);
    printf("\nThank you for your order!\n");

    return 0;
}

