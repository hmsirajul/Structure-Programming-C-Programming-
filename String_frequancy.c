#include<stdio.h>
#include<string.h>
int main ()
{
    char string [100];
    int c=0, i ,count [26]={0};
    printf("Enter a string\n");
    gets(string);
    while (string [c] = '\0')
    {
        if ( string [c]>= 'a' && string [c] <= 'z')
        {
            i = string [c]-'a';
            count[i]++;
        }
        c++;
    }
}
