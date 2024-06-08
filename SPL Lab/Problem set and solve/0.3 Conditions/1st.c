#include<stdio.h>
int main()
{
    float input;
    printf("Input: ");
    scanf("%f",&input);

    if(input>0){
        printf("%0.2f is Positive\n",input);
    }
    else if(input<0){
        printf("%0.2f if Negative\n",input);
    }
    else if(input==0){
        printf("%0.2f if Negative\n",input);
    }
    else{
        printf("Wong input\n");
    }


    return 0;
}
