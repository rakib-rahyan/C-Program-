#include <stdio.h>

int main()
{
    int b;
    printf("Enter your integer input: ");
    scanf("%d", &b);
    puts("Your program output");

    if (b >= 10)
    {
        printf("SPL\n");
        b--;
    }

    // Since switch-case cannot handle conditions directly, we preprocess the conditions
    int case_value;
    if (b < 3)
        case_value = 0;
    else if (b < 10)
        case_value = 1;
    else
        case_value = 2; // This should not happen since b >= 10 is handled above

    switch (case_value)
    {
        case 0:
            // b < 3
            printf("Huh!\n");
            break;

        case 1:
            // 3 <= b < 10
            printf("Spring\n");
            b--;
            printf("2023\n");
            if (b >= 3 && b < 10)
            {
                printf("Happy Coding!\n");
            }
            break;

        default:
            printf("Huh!\n");
            break;
    }

    return 0;
}
