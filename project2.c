#include <stdio.h>

main(){

    int x = 10;
    int y = 20;
    int a;
    int b;

    printf ("Pre Increment\n");
    a = ++x;
    printf("a = %d", a);
    printf("\nx = %d", x);

    printf("\n\nPre Decrement\n");
    a = --x;
    printf("a = %d", a);
    printf("\nx = %d", x);

    printf("\n\nPost Increment\n");
    b = y++;
    printf("b = %d", b);
    printf("\ny = %d", y);

    printf("\n\nPost Decrement\n");
    b = y--;
    printf("b = %d", b);
    printf("\ny - %d", y);

}
