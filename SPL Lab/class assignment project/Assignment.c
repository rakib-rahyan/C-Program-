#include<stdio.h>
struct StuInfo
{
    char name[50];
    char id[20];
    float SubMar[3][4];
    float Cgpa;
};
void print(struct StuInfo st[], int n)
{
    FILE *output = fopen("output.txt","a");
    for(int i=0; i<n; i++)
    {
        fprintf(output, "\nStudent of %d\n",i+1);
        fprintf(output, "Name: %s\n", st[i].name);
        fprintf(output, "ID: %s\n", st[i].id);
        for(int j=0; j<3; j++)
        {
            fprintf(output, "Subject %d mark: ",j+1);
            for(int k=0; k<4; k++)
            {
                fprintf(output, "%0.2f ",st[i].SubMar[j][k]);
            }
            fprintf(output, "\n");
        }
        fprintf(output, "CGPA: %.2f\n", st[i].Cgpa);
    }
    fclose(output);
}
void printtotal(struct StuInfo st[], int n)
{
    FILE *output = fopen("output.txt","a");
    for(int i=0; i<n; i++)
    {
        fprintf(output, "\nStudent %d:\n",i+1);
        for(int j=0; j<3; j++)
        {
            float sum=0;
            for(int k=0; k<4; k++)
            {
                sum+=st[i].SubMar[j][k];
            }
            fprintf(output, "Subject %d total: %0.2f \n",j+1, sum);
        }
    }
    fclose(output);
}
float maxCGPA(struct StuInfo st[],int n)
{
    float max=st[0].Cgpa;
    for(int j=0; j<n; j++)
    {
        if(max<st[j].Cgpa)
        {
            max= st[j].Cgpa;
        }
    }
    return max;
}
float minCGPA(struct StuInfo st[],int n)
{
    float min=st[0].Cgpa;
    for(int j=0; j<n; j++)
    {
        if(min>st[j].Cgpa)
        {
            min = st[j].Cgpa;
        }
    }
    return min;
}
int main()
{
    int n=0;
    FILE *input = fopen("input.txt", "r");
    char name[50], id[50];
    float marks[3][4], cgpa;

    while (fscanf(input, "%s %s", name, id)==2)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                fscanf(input, "%f", &marks[j][k]);
            }
        }
        fscanf(input, "%f", &cgpa);
        n++;
    }
    fclose(input);

    struct StuInfo st[n];

    input = fopen("input.txt", "r");
    int i=0;
    for(i=0; i<n; i++)
    {
        fscanf(input, "%s", st[i].name);
        fscanf(input, "%s", st[i].id);
        for(int j=0; j<3; j++)
        {
            for(int k=0; k<4; k++)
            {
                fscanf(input, "%f",&st[i].SubMar[j][k]);
            }
        }
        fscanf(input, "%f",&st[i].Cgpa);
    }
    fclose(input);
    print(st, n);
    printtotal(st,n);
    FILE *output = fopen("output.txt", "a");
    fprintf(output,"\nMaximum CGPA: %.2f\n",maxCGPA(st,n));
    fprintf(output,"Minimum CGPA: %.2f\n",minCGPA(st,n));
    fclose(output);
    getch();
    return 0;
}
