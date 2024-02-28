#include <stdio.h>
#include <stdlib.h>
#include "ex2403.h"
/* prototypes */

void fillstructure(void);
void printstructure(void);

/* constants */

/* variables */

struct thing {
    char name[32];
    int age;
    };

typedef struct thing human;
int main()
{
    fillstructure();
    printstructure();
    return 0;
}

void fillstructure(void)
{
    printf("Enter your name: ");
    fgets(person.name, 31, stdin);
    printf("Enter your age: ");
    scanf("%d", &person.age);
}

void printstructure(void)
{
    printf("You are %s\n", person.name);
    printf("And you are %d years old.\n", person.age);
}