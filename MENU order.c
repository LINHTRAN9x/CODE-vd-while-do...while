#include <stdio.h>

int main() {
    float coffee = 2.05, tea = 2.00, smoothie = 3.00;
    int choice;
    int coffee_count = 0, tea_count = 0, smoothie_count = 0;
    float sum = 0;
    do {
        printf("---MENU---\n");
        printf("1.coffee ($%.2f)\n", coffee);
        printf("2.tea ($%.2f)\n", tea);
        printf("3.smoothie ($%.2f)\n", smoothie);
        printf("4.QUIT\n");
        printf("Enter your choice (1-4) : ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("coffee ordered\n");
                coffee_count++;
                sum += coffee;
                break;
            case 2:
                printf("tea ordered\n");
                tea_count++;
                sum += tea;
                break;
            case 3:
                printf("smoothie ordered\n");
                smoothie_count++;
                sum += smoothie;
                break;

            default:
                printf("Order details:\n");
                printf("coffees : %d\n", coffee_count);
                printf("teas : %d\n", tea_count);
                printf("smoothies : %d\n", smoothie_count);
                printf("total cost : $%.2f\n", sum);
                break;

        } printf("Invalid choice\n");

    }while (choice != 4);
}
