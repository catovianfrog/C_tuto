#include <stdio.h>
#include "dbg.h"

#define MAX_DATA 100

typedef enum EyeColor {
    BLUE, GREEN, BROWN, BLACK, OTHER
} EyeColor;

const char *COLOR_NAMES[] = {"Blue", "Green", "Brown", "Black", "Other"};

typedef struct Person {
    int age;
    char first_name[MAX_DATA];
    char last_name[MAX_DATA];
    EyeColor eyes;
    float income;
} Person;

int main(int argc, char *argv[]) {
    Person you = {.age=0};
    int i = 0;
    char *in = NULL;

    printf("What's your first name ? ");
    // ATTENTION fscanf includes the last LF character in the input chain
    in = fgets(you.first_name, MAX_DATA-1, stdin);
    check(in != NULL, "Failed to read first name.");
    // strips the string of last character (LF)
    // TO DO: create a function to strip last character (LF)
    // or better, inputs a string, free of terminating LF.
    for(i = 0; i <MAX_DATA; i++) { 
	if(you.first_name[i] == '\0') {
	    you.first_name[i-1] = '\0';
	break;
	};
    }

    printf("What's your last name ? ");
    in = fgets(you.last_name, MAX_DATA-1, stdin);
    check(in != NULL, "Failed to read last name.");

    printf("How old are you? ");
    int rc = fscanf(stdin, "%d", &you.age);
    check(rc >0, "You have to enter a number.");

    printf("What color are your eyes? ");
    for(i = 0; i <= OTHER; i++) {
	printf("%d) %s\n", i+1, COLOR_NAMES[i]);
    }
    printf("> ");
    int eyes = -1;
    rc = fscanf(stdin, "%d", &eyes);
    check(rc > 0, "You have to enter a number.");

    you.eyes = eyes -1;
    check(you.eyes <= OTHER && you.eyes >= 0, "Do it right, this is not an option.");

    printf("How much do you make an hour ? ");
    rc = fscanf(stdin, "%f", &you.income);
    check(rc >0, "Enter a floating point number.");

    printf("\n----- RESULTS -----\n");
    printf("First name: %s\n", you.first_name);
    printf("Name:       %s\n", you.last_name);
    printf("Age:        %d\n", you.age);
    printf("Eyes:       %s\n", COLOR_NAMES[you.eyes]);
    printf("Income:     %.2f\n", you.income);

    return 0;
error:
    return -1;

}

