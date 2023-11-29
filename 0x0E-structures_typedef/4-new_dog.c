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
	int len1, len2;

	len1 = strlen(name);
	len2 = strlen(owner);

	new_dog_ptr = malloc(sizeof(dog_t));

	if (new_dog_ptr == NULL)
	{
		return (NULL);
	}

	new_dog_ptr->name = malloc(sizeof(char) * (len1 + 1));

	if (new_dog_ptr->name == NULL)
	{
		free(new_dog_ptr);
		return (NULL);
	}

	new_dog_ptr->owner = malloc(sizeof(char) * (len2 + 1));
	if (new_dog_ptr->owner == NULL)
	{
		free(new_dog_ptr);
		free(new_dog_ptr->name);
		return (NULL);
	}

	strcpy(new_dog_ptr->name, name);
	strcpy(new_dog_ptr->owner, owner);
	new_dog_ptr->age = age;

	return (new_dog_ptr);
}
