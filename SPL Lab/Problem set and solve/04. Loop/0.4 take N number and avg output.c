#include<stdio.h>
int main()
{
    float avg, num, n, i = 0, sum = 0;
    scanf("%f",&n);

    for(i; i<n; i++){
    scanf("%f",&num);
    sum=sum+num;
    }
    avg=sum/n;
    printf("Sum= %f\n",sum);
    printf("Avg of %f inputs: %f",n ,avg);

    return 0;
}
