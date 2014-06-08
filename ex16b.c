/* 
 * CREDIT version of ex16
 *  creating and passing structures through the stack, not the heap
 *  uses variables structures rather than pointers
 *  Access structure members with x.y rather than pointers x->y
 */

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    char    *name;
    int	    age;
    int	    height;
    int	    weight;
};

struct Person Person_create(char *name, int age, int height, int weight)
{
    struct Person who;
    who.name = name;
    who.age = age;
    who.height = height;
    who.weight = weight;

    return who;
}

/* No need to destroy memory allocated on the heap */

void Person_print(struct Person who) {
    printf("Name: %s\n", who.name);
    printf("\tage: %d\n", who.age);
    printf("\theight: %d\n", who.height);
    printf("\tweight: %d\n", who.weight);
}

int main(int argc, char *argv[]) {
    // make two people structures
    struct Person joe = Person_create( "Bruno Charriere", 53, 182, 86);
    struct Person frank = Person_create( "Frank Blank", 20, 72, 180);

    // print them out and where they are in memory
    printf("Joe is at memory location %p:\n", &joe);
    Person_print(joe);

    printf("Frank is at memory location %p:\n", &frank);
    Person_print(frank);                                   

    // make everyone 20 years older and print them again
    joe.age += 20;
    joe.height -=2;
    joe.weight +=40;
    Person_print(joe);

    frank.age += 20;
    frank.weight += 20;
    Person_print(frank);

    return 0;
}

