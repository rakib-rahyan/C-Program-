/*WAP that will take n alphabets into an array, and then count number of vowels in that
array.*/
#include<stdio.h>
int main()
{
    int n, counter=0;
    printf("This program for \" you want to input a line then this line how many vowel count this program\"");
    printf("Enter line number of letter with speech: ");
    scanf("%d",&n);
    char arr[n];
    for(int i; i<n; i++)
    {
        scanf("%c",&arr[i]);
        if('a'==arr[i] || 'e'==arr[i] || 'i'==arr[i] || 'o'==arr[i]|| 'u'==arr[i] || 'A'==arr[i] || 'E'==arr[i] || 'I'==arr[i] || 'O'==arr[i]|| 'U'==arr[i])
        {
            counter++;
        }
    }
    printf("Number of vowel in line: %d",counter);
    return 0;
}


