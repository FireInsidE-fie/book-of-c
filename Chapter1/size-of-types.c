#include <stdio.h>
#include <limits.h>

int main() {
    printf("Size of an int on this system : %zu bytes\n", sizeof(int));
    printf("Size of an long on this system : %zu bytes\n", sizeof(long));
    printf("Int range : %d to %d\n", INT_MIN, INT_MAX);
    printf("Long range : %d to %d\n", LONG_MIN, LONG_MAX);

    return 0;
}
