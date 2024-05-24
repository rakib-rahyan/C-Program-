//calculate profit or loss
#include<stdio.h>
int main()
{
    int co, se, amt;
    printf("Input cost price: ");
    scanf("%d",&co);

    printf("Input selling price: ");
    scanf("%d",&se);

    if(co<se){
        amt=se-co;
        printf("Profit: %d\n",amt);
    }
    else if(co>se){
        amt=co-se;
        printf("Loss: %d\n",amt);
    }
    else{
        printf("no Profit, no sole\n");
    }
    main();
    return 0;
}
