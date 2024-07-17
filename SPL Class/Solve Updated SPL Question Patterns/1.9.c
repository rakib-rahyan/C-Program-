#include <stdio.h>
int main()
{
    int a = 2;
    int b = 4;
    int sum=0;
    sum = a + b;
    if (sum % 2 == 0)
    {
        printf("Total: %d is even", sum);
    }
    else
    {
        printf("Total: %d is odd", sum);
    }
    return 0;
}
/*the code
include <stdio.h>
int main() {
    int a = 2; int b = 4; int sum;
    sum = a + b;
    if (sum % 2 = 0) {
        printf("Total: %d is even", Sum);
    } else {
       Printf("Total: %f is odd", sum);
    }
    return o;
}
*/
