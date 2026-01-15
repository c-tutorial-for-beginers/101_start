#include<stdio.h>
#include<stdlib.h>

//103 c switch


int main() {
    int choice;

    printf("1. Start\n");
    printf("2. Settings\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("You chose Start\n");
            break;

        case 2:
            printf("You chose Settings\n");
            break;

        case 3:
            printf("You chose Exit\n");
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
