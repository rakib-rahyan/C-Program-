#include<stdio.h>
int main()
{
    int items[1000], add[1000];
    int n;
    char password[100];
    printf("Enter your drawers of items: ");
    scanf("%d",&n);

    printf("Enter your %d of items number: ",n);
    for(int i=0; i<n; i++){
        scanf("%d",&items[i]);
    }
    printf("Enter your %d of add number: ",n);
    for(int i=0; i<n; i++){
        scanf("%d",&add[i]);
    }

    additems(items, add, n);
    printf("added items= new items: ");
    for(int i=0; i<n; i++){
        printf("%d ", items[i]);
    }
    getchar(); //**** very importest
    gets(password); //**** very importest
    doorOpen(password);
    return 0;
}
void additems(int items[], int add[], int n)
{
    for(int i=0; i<n; i++)
    {
        items[i]=items[i]+add[i];
    }
}
void doorOpen(char password[])
{
    char funPass[]= "Rakib Rahyan";
    int i=0, match=1;
    while( password[i]!='\0'|| funPass[i]!='\0'){
        if(password[i]!=funPass[i]){
            match=0;
            break;
        }
        i++;
    }
    if(match){
        printf("The door is oppen\n");
    }
    else{printf("The door is not open");}
}
