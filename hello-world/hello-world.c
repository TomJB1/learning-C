#include <stdio.h>
#include <stdlib.h>

int main()
{
    //%s string, &d int, %f double
    char name [20];
    char name2 [20];
    int intiger = 10;
    double decimal = 2.4;
    printf("enter name (one word): ");
    scanf("%s", name);
    printf("enter name (max 20 chars): ");
    fgets(name2, 20, stdin);
    printf("Hello %s! \n", name);
    printf("Hello %s! \n", name2);
    printf("Number: %d! \n", intiger);
    printf("Number: %f! \n", decimal);
    printf("Name %s, Number %d, decimal %f\n", name, intiger, decimal);
    return 0;
}