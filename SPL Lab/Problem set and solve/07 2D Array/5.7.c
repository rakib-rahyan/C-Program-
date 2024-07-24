#include<stdio.h>
int main()
{
    int result = 0;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            result += i * j + 2;
        }
    }
    printf("Result: %d", result);
}
