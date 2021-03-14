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
#include<stdio.h>

main()
{
    int c , nc , nw;
    nc = nw = 0;
    int word[20];
    for(int i =0 ; i < 20 ; i++)
    {
        word[i] = 0;
    }
    while((c = getchar()) != EOF)
    {
        if(c == ' ' || c == '\n' || c == '\t')
        {
            word[nw] = nc;
            nw++;
            nc = 0;
        }
        else
        {
            nc++;
        }
    }
    int maxc = 0;
    for(int i = 0;i < nw; i++)
    {
        if(word[i] > maxc)
        {
            maxc = word[i];
        }
    }
    for(int i = maxc; i >= 1 ;i--)
    {
        for(int j = 0;j< nw;j++)
        {
            if(i <= word[j])
            {
                putchar('*');
            }
            else
            putchar(' ');
        }
        putchar('\n');
    }
}