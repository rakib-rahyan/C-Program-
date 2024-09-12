/*#include <stdio.h>
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
Rewrite the code in Q.6(a) by replacing the “switch” with a “nested if…else” statement. Be careful
to deal with the default case properly
*/
#include <stdio.h>

int main()
{
    int num;
    int sum = 0, i = 1, j = 3;
    scanf("%d", &num);

    if (num == 1)
    {
        sum += (i + j);
        i++;
        if (num == 2)  // Check if 2 is nested after case 1
        {
            sum += j - 2;
            j++;
        }
    }
    else if (num == 2)
    {
        sum += j - 2;
        j++;
    }
    else if (num == 3)
    {
        sum = (i + j) * i;
        i++;
        j--;
        if (num == 4)  // Nested check for case 4
        {
            sum -= (i + j);
            j--;
        }
    }
    else if (num == 4)
    {
        sum -= (i + j);
        j--;
    }

    printf("%d %d %d", i, j, sum);
    return 0;
}
