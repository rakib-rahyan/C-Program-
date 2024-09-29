#include<stdio.h>
int main()
{
 int a,b,sum;
 FILE *fpInput;
 FILE *fpOutput;
 fpInput = fopen("input.txt","r");
 fscanf(fpInput,"%d",&a);
 fscanf(fpInput,"%d",&b);
 fclose(fpInput);
 sum = a+b;
 fpOutput = fopen("output.txt","w");
 fprintf(fpOutput,"sum is: %d\n",sum);
 fclose(fpOutput);
 return 0;
}
