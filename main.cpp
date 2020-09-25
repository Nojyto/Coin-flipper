#include <cstdio>
#include <stdlib.h>
#include <time.h>

int main()
{
    unsigned int flips, heads = 0, tails = 0;

    printf("---Coin tosser---\nHow many times to toss the coin? ");
    scanf("%i", &flips);

    srand((time(NULL)));

    for(unsigned int i = 0; i < flips; i++)
        rand() % 2 == true ? heads++ : tails++;

    printf("The odds were heads-%i/tails-%i.\n", heads, tails);
}
