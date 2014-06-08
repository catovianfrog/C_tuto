#include <stdio.h>
int main(int argc, char *argv[])
{
    //go through each string in an argv
    int i=0;
    while(i < argc) {
	printf("arg %d: %s\n", i, argv[i]);
	i++;
    }

    //let's make our own array of strings
    char *states[] = {"California", "Oregon", "Washington", "Texas"};
    int num_states = 4;
    i = 0;
    while(i < num_states) {
	printf("State #%d: %s\t", i, states[i]);
        i++;
    }
    printf("\n\n");

    i = 1;
    while(i < num_states) {
        if (i < argc) {
		states[i] = argv[i];
	}
        i++;
    }

    i=0; 
    while(i < num_states) {
	printf("State #%d: %s\t", i, states[i]);
        i++;
    }
    printf("\n\n");

    return 0;
}

