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
    int c;
    char freq[128];
    for(int i=0;i<128;i++)
    {
        freq[i] = 0;
    }
    while((c = getchar()) != EOF)
    {
        if(c == '\n')
        {
            ;
        }
        else
        {
            freq[c]++;
        }
    }
    for(int i = 0;i< 128;i++)
    {
        if(freq[i] != 0)
        {
            printf("\n%c = %d",i,freq[i]);
        }
    }

}
