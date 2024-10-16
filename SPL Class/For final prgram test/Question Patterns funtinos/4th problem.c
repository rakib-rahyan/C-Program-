#include<stdio.h>
//int computEven(int num[], int n);
//int isEven(int num[], int i);
int main()
{
    int n=0;
    scanf("%d",&n);
    int num[n];
    for(int i=0; i<n; i++){
        scanf("%d",&num[i]);
    }
    printf("Event number of usum: %d",computEven(num, n));
    return 0;
}
int computEven(int num[], int n)
{
    int sum=0;
    for(int i=0; i<n; i++)
    {
        if(isEven(num[i])){
            sum+=num[i];
        }
    }
    return sum;
}
int isEven(int num)
{
    if(num%2==0){
        return 1;
    }
    else
    {
        return 0;
    }
}
