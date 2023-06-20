#include "dog.h"
/**
 * new_dog - create a new dog
 * @name: name of dog
 * @age: dog's age
 * @owner: dog's owner
 * Return: new dog, if fails returns NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	new_dog = (char *)malloc(sizeof(char));

	new_dog->name = name;
	new_dog->owner = owner;

	if (new_dog == NULL)
		return (NULL);
}
