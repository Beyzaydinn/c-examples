#include <stdio.h>

int main()
{
    int a,b;

    printf("Enter value A: ");
    scanf("%d",&a);
    printf("Enter different value B: ");
    scanf("%d",&b);

    if( a > b )
        printf("Value %d is larger.\n",a);
    else
        printf("Value %d is larger.\n",b);
    return(0);
}