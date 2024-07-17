#include<stdio.h>
int main()
{
    int a = 'A';
    float b = 5.5;
    float sum=0;
    sum = a + b;
    if (sum > 5)
    {
        printf("Sum: %f is greater than 5", sum);
    }
    else
    {
        printf("Sum: %f is less than or equal to 5", sum);
    }
    return 3;
}
/*The code
include <stdio.h>
int main() {
int a = A; float b = 5.5; float sum;
sum = a + b;
if (sum > 5) {
printf("Sum: %f is greater than 5", sum);
} else {
printf("Sum: %f is less than or equal to 5", sum);
return 3.5;
}
*/
