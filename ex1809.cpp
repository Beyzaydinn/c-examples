#include <stdio.h>

int main()
{
    char lead;
    char *sidekick;

    lead = 'A';        /* initialize char variable */
    sidekick = &lead;  /* initialize pointer IMPORTANT! */

    printf("About variable 'lead':\n");
    printf("Size\t\t%zd\n",sizeof(lead));
    printf("Contents\t%c\n",lead);
    printf("Location\t%p\n",&lead);
    printf("About variable 'sidekick':\n");
    printf("Contents\t%p\n",sidekick);

    return(0);
}