#include <stdio.h>
#include <stdlib.h>

void second(void);

int count;

int main()
{
    for(count=0;count<5;count++)
        second();
    return 0;
}

extern int count;

void second(void)
{
    printf("%d\n", count + 1);
}