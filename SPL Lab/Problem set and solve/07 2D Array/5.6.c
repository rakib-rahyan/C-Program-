#include<stdio.h>
int main()
{
    int total = 0;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            total += i * j - 1;
        }
    }
    printf("Total: %d", total);

}

