#include <stdio.h>
#include <string.h>  // For string comparison

// Step (ii): Function to add items
void additems(int items[], int add[], int n) {
    for (int i = 0; i < n; i++) {
        items[i] += add[i];  // Update each item[i] by adding add[i]
    }
}

// Step (iii): Function to open the door
void openDoor(char password[]) {
    // Check if the password matches "Rakib Rahyan"
    if (strcmp(password, "Rakib Rahyan") == 0) {
        printf("Door to Rakib Rahyan is open.\n");
    } else {
        printf("There is no door.\n");
    }
}

int main() {
    int items[1000], add[1000];  // Step (i): Declare two arrays
    int n;

    // Take user input for n
    printf("Enter the number of drawers: ");
    scanf("%d", &n);

    // Take input for the items array
    printf("Enter %d items for the drawers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &items[i]);
    }

    // Take input for the add array
    printf("Enter %d numbers to add to the corresponding items: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &add[i]);//Ekhane input sheshe enter deyar por Enter ta thaika jai input e tai getchar use kre oi enter to shorai te hbe
    }
    getchar();  //consumes enter
    // Call the additems function to update items
    additems(items, add, n);

    // Display updated items
    printf("Updated items in the drawers: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", items[i]);
    }
    printf("\n");

    // Take user input for password
    char password[50];
    printf("Enter the password to open the door: ");
    gets(password); //scanf space er por r input nei na tai gets use krte hbe

    // Call the openDoor function to check the password
    openDoor(password);

//    return 0;
}
