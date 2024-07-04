#include<stdio.h>
int main()
{
    int input;
    printf("Input: ");
    scanf("%d",&input);

    if(input%2==0){
        printf("%d is Even\n",input);
    }
    else{
        printf("%d is odd\n",input);
    }


    return 0;
}
