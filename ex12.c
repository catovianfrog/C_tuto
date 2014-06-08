#include <stdio.h>
// if-else if-else statement
// counts the number of arguments
// N.B. Program name counts as argument 1
//
//
int main(int argc, char *argv[])
{
    int i = 0;
    if(argc == 1) {
	printf("You have not entered any argument.\n");
    } else if(argc >1 && argc <5) {
	for(i=1; i < argc; i++) {
	    printf("#%d: %s\t", i, argv[i]);
	}
	printf("\n");
    } else {
	printf("You have more than 3 arguments.\n");
    }

    return 0;
}
