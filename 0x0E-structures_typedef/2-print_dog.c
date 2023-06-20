#include "dog.h"
/**
 * print_dog - prints the elements of dog
 * @d: pointer to dog structure
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("nil\n");
	}
	else
	{
		printf("Name: %s\n", (d->name != NULL) ? d->name : (""));
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", (d->owner != NULL) ? d->owner : (""));
	}
}
