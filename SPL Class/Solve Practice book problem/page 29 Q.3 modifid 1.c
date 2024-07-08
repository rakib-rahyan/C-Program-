#include<stdio.h>
int main()
{
    int weeks=2, days_in_week=7;
    int i=0;
    do{
        printf("Week: %d\n",i);
        int j=i;
        do{
           if(i%2==0){
            if(j%2==0)
                printf("    Day: %d\n",j);
           }
           else{
            if(j%2!=0)
                printf("    Day: %d\n",j);
           }
           ++j;
        }while(j<=days_in_week);
        ++i;
    }while(i<=weeks);
    return 0;
}
