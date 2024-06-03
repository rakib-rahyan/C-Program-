//print all even numbers from 1 to N
#include<stdio.h>
int main()
{
    int start=1, range;
    printf("print all even numbers from 1 to N\n");
    printf("Input upper range: ");
    scanf("%d",&range);

    for(start; start<=range; start++){
        if(start%2==0){
            printf("%d\n",start);
        }
    }
    return 0;
}
