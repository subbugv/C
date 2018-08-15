#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int i=1;
    bool x=true;
    printf("%d %d", i, x);
    printf(x ? "\ntrue" : "\nfalse");
    printf("%s", x ? "\ntrue" : "\nfalse");
    return 1;
}
