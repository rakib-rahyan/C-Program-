#include<stdio.h>
#define RES_SIZE 20
#define FRE_SIZE 6
int main(void)
{
    int response[RES_SIZE]={1,1,1,1,1,1,1,2,2,2,2,2,2,2,3,3,3,3,4};
    int frequency[FRE_SIZE]={0};
    for(int i=1; i<FRE_SIZE; i++){
        for(int j=0; j<RES_SIZE; ++j){
            if(i==response[j]){
                frequency[i]+=1;
            }
        }
    }
    printf("%s%12s\n","Rating","Frequency");
    for(int i=1; i<FRE_SIZE; i++){
        printf("%6d%12d\n",i, frequency[i]);
    }
}
