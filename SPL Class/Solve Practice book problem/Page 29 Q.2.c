/*in work book given a problem page 29 Q.2 and told Manually trace the following code segment and
show the change of value of the variables i,j,result, x, y in each step:*/
#include<stdio.h>
int main()
{
    int result=5, i, x=2,y=2, j=8;
    for(j;j>3; --j){
        i=(j*result)/x;
        result+=y;
        x+=(y-2);
        y++;
        printf("j: %7d\ni: %7d\nresult: %d\nx: %7d\ny: %7d\nDone\n",j,i,result,x,y);

    }
}
