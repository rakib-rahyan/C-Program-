
#include<stdio.h>



int main()
{
int a,b;
FILE *fpInput;
FILE*fpOutput;
fpInput=fopen("input.txt","r");
fscanf(fpInput,"%d",&a);
fscanf(fpInput,"%d",&b);
fclose(fpInput);
int k=0;
if(a>b){
        k=a;
}else {
k=b;
}
fpOutput=fopen("ans.txt","w");
fprintf(fpOutput,"max is = %d",k);
fclose(fpOutput);
return 0;
}

