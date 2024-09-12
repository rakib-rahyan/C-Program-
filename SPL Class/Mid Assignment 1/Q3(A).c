/*Find the output of the code below for num = LAST_2_DIGITS_OF_YOUR_ ID % 5.*/
#include <stdio.h>
int main()
{
    int num;
    int sum = 0, i = 1, j = 3;
    scanf("%d", &num);
    switch(num)
    {
    case 1:
        sum += (i + j);
        i++;
    case 2:
        sum += j - 2;
        j++;
        break;
    case 3:
        sum = (i + j) * i;
        i++;
        j--;
    case 4:
        sum -= (i + j);
        j--;
    }
    printf("%d %d %d", i, j, sum);
    return 0;
}

