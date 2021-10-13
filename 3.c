#include<stdio.h>
#include<string.h>

int main()
{
    char sent[100];
    char *ptr;
    printf("Enter a sentence : ");
    gets(sent);
    char len=strlen(sent);
    printf("%c", *sent);
    ptr=sent;
    for(int i=1; i<len; i++)
    {
        if(*(ptr+i-1) == ' ')
        {
            printf(" %c", *(ptr+i));
        }
    }
    return 0;
}