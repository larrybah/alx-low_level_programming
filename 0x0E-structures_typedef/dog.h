#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct dog - create a dog structure
 * @name: name of dog
 * @age: dog's age
 * @owner: dog owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
