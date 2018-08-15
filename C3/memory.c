#include <stdlib.h>
#include <stdio.h>

void f(void) {
    int* x = malloc(10*sizeof(int));
    //x[10] = 0;
    printf("x is %i\n", x);
    printf("x[0] is %i", x[0]);
}

int main(void) {
    f();
    return 0;
}