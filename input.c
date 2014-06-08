#include <stdio.h>

main() {

int c;

while((c=getchar()) != EOF) putchar(c);

printf("\nChar EOF: %5x %5o %5d \n",EOF,EOF,EOF);

}


