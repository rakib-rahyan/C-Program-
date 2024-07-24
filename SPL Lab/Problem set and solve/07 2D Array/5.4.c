#include<stdio.h>
int main()
{
    int count = 0;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            count += j;
        }
    }
    printf("Count: %d", count);

}
