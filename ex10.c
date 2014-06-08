#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;
    //let's make our own array of strins
    char *states[] = {"California", "Oregon", "Washington", "Texas"};
    int num_states = 6;

    argv[2] = states[2];
     
    printf("argv[0]:%s, argc: %d\n\n", argv[0], argc);
    // go through each string in argv
    // why am I skipping argv[0] ?
    for (i = 0; i < argc; printf("%d ", i), i++ ) {
	printf("argument %d: %s\n", i, argv[i]);
    }

    for (i = 0; i < num_states; i++) {
	printf("state %d: %s\n", i, states[i]);
    }

    return 0;
}
