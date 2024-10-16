#include <stdio.h>
#include <string.h>

#define MAX_SIZE 1000

// Function to add items
void additems(int items[], int add[], int n) {
    for (int i = 0; i < n; i++) {
        items[i] += add[i]; // Update items array
    }
}

// Function to open the cupboard door
void openDoor(char password[]) {
    const char correctPassword[] = "Rakib Rahyan"; // Predefined password
    if (strcmp(password, correctPassword) == 0) {
        printf("Door to Rakib Rahyan is open.\n");
    } else {
        printf("There is no door.\n");
    }
}

int main() {
    int items[MAX_SIZE]; // Array to store items
    int add[MAX_SIZE];   // Array to store items to add
    int n;              // Number of items

    // User input for number of items
    printf("Enter the number of items: ");
    scanf("%d", &n);

    // Input items and add arrays
    printf("Enter %d items: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &items[i]);
    }

    printf("Enter %d items to add: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &add[i]);
    }

    // Call additems function
    additems(items, add, n);

    // Display updated items
    printf("Updated items:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", items[i]);
    }
    printf("\n");

    // Input password
    char password[100]; // Buffer to store the password
    printf("Enter the password to open the door: ");
    scanf("%s", password);

    // Call openDoor function
    openDoor(password);

    return 0;
}
