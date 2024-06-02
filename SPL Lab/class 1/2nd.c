//in Spl lab new problem input 4 integer number and which is maximum number;

        // problem solve in Bitwise operator.
/*#include<stdio.h>
int main()
{   int a,b,c,d;
    printf("Enter 4 integer number if you can see which number is maximum: ");
    scanf("%d %d %d %d",&a,&b,&c,&d);

    a>b?printf("%d is max\n",a):b>c?printf("%d is max\n",b):c>d?printf("%d id max\n",c):printf("%d is max\n",d);

    getch();
    return 5; //larnign now property if return 0 then show after run program 0 if return floting number then main() befor is float it mean int main is float main;
}
*/
        //Same problem write in If else condition
/*
#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter 4 integer number if you can see which number is maximum: ");
    scanf("%d %d %d %d",&a,&b,&c,&d);

    if(a>b && a>c && a>d){
        printf("%d id maximum\n",a);
    }
    else if(b>a && b>c && b>d){
        printf("%d id maximum\n",b);
    }
    else if(c>a && c>b && c>d){
        printf("%d id maximum\n",c);
    }
    else if(d>a && d>b && d>c){
        printf("%d id maximum\n",d);
    }
    else {
        printf("integer is equal\n");
    }

    getch(); // why i can write getch() because if run my bba friend this is help my friend.
    return 5; //larnign now property if return 0 then show after run program 0 if return floting number then main() before is float it mean int main is float main;
    return 0;
}
*/
        // this problem solve in different way in if else condition
#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter 4 integer number if you can see which number is maximum: ");
    scanf("%d %d %d %d",&a,&b,&c,&d);

    if(a>b){
        if(a>b){
            if(b>c){
                printf("%d is max\n",a);
            }
        }
    }
    else if(b>c){
        if(b<d){
            printf("%d is max\n",b);
        }
    }
    else if(c>d){
        printf("%d is max\n");
    }
    else if(a==b==c==d){
        printf("4 number is equal\n");
    }
    else{
        printf("%d id max\n",d);
    }

    main();

    return 0;
}
