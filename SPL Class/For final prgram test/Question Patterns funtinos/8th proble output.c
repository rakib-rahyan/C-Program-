#include<stdio.h>
int x = 2, y = 3;
int fun1(int n)
{
    return n%11;
}
void fun2(int arr[], int n)
{
    for(int i = 0; i<n; i++)
    {
        x = fun1(x) + fun1(y);
        arr[i] = arr[i] + x;
        y = fun1(y) + fun1(x);
    }
}
int main()
{
    int a[] = {2, 3, 5, 7, 11};
    fun2(a, 5);
    for(int i = 0; i<5; i++)
        printf("%d ", a[i]);
}
