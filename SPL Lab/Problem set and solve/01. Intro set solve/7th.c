
#include<stdio.h>
int main()
{
    int a;
    float f;
    char ch;

    printf("input 1st int, 2nd float, 3ed character: ");
    scanf("%d %f %c", &a, &f, &ch);
    printf("The integer value: %d\n",a);
    printf("The floating point value: %f\n",f);
    printf("The character value %c\n",ch);

    return 0;
}
