#include <stdio.h>

/* count characters in input; 2nd version */
main() {
    double nc;

    // This will count the characters of the stdin
    for (nc = 0; getchar() != EOF; ++nc)
        ;
    
    printf("%.0f\n", nc);
}
