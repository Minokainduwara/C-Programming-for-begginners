#include <stdio.h>

main(){

    char myName[] = "Minoka Induwara";
    char yName[15] = "Johnathm Wyane";
    int size = sizeof(myName)/sizeof(myName[0]);

    printf("Name is %s", myName);
    printf("\nSize is %d",size);
    printf("\n11th element is %c",myName[11]);
    printf("\n\nyname is %c\n\n\n",yName[15]);

    printf("\n");


}
