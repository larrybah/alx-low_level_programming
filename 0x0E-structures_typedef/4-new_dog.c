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
	dog_t *new_dog_ptr;

	new_dog_ptr = (dog_t *)malloc(sizeof(dog_t));

	if (new_dog_ptr == NULL)
	{
		return (NULL);
	}

	new_dog_ptr->name = name;
	new_dog_ptr->owner = owner;
	new_dog_ptr->age = age;

	return (new_dog_ptr);
}
