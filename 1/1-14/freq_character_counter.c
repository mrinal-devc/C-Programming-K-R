/***
 * Mrinal
 * ------
 * ------
 * ------
 * ------
 * ------
 * ------
 * ------
 * ------
 * Chanda
***/
#include <stdio.h>

int main()
{
    int c;
    int freq[128];
    for(int i = 0; i < 128; i++)
    {
        freq[i] = 0;
    }
    while((c =getchar()) != EOF)
    {
        if(c == '\n' || c == '\t' || c == ' ')
        {
            ;
        }
        else
        freq[c]++;
    }
    int hist(int a)
    {
        for(int i =0;i < a; i++)
        {
            printf("* ");
        }
    }
    for(int i = 0; i < 128; i++)
    {
        if(freq[i] != 0)
        {
            printf("%c = %d\t",i,freq[i]);
            printf("\t%c\n",hist(freq[i]));
        }
    }
    
}
