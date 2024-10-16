#include<stdio.h>
//float take_highest_ct(float ct_mark[], int n);
float take_highest_ct(float ct_mark[], int n)
{
    float ct = ct_mark[0];
    for(int i = 1; i < n; i++) {
        if(ct < ct_mark[i]) {
            ct = ct_mark[i];
        }
    }
    return ct;
}
int main()
{
    int n=0;
    printf("Enter number of n, How many CT number you want to input: ");
    scanf("%d",&n);
    float ct_mark[n];
    input_ct_mark(ct_mark, n);

    printf("Hightest ct marks is: %f", take_highest_ct(ct_mark,n));
    return 0;
}
void  input_ct_mark(float ct_mark[],int n)
{
    printf("Enter CT markses: ");
    for(int i=0; i<n; i++){
        scanf("%f",&ct_mark[i]);
    }
}

