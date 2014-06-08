#include <stdio.h>
#include <errno.h>
#include <string.h>

//test the syntax: s = (errno ==0 ? "None" : strerror(errno)); 
char *s = "";
int main( int argc, char *argv[]) {
    FILE *f1, *f2;
    f1=fopen("try.c", "r"); // file exists, no error
    s = (errno ==0 ? "None" : strerror(errno));
    printf("No error: -%s-\n", s);
    
    f2=fopen("non-existing-file", "r"); // file doesn't exists => error
    s = (errno ==0 ? "None" : strerror(errno));
    printf("Error: -%s-\n", s);

    fclose(f1);
// no need to close f2, as it didn't open! 
    
    return 0;
}


