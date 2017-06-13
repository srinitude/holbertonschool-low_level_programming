#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - Duplicates a string
 * @str: The string in question
 *
 * Return: Pointer to the new string
 */

char *_strdup(char *str)
{
	char *ptr;
	int i;
	int len = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		len++;
	ptr = malloc(++len * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		ptr[i] = str[i];
	ptr[i] = '\0';
	return (ptr);
}

/**
 * new_dog - Creates a new dog on the heap
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the new dog or NULL
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggie;

	doggie = malloc(sizeof(dog_t));
	if (doggie == NULL)
		return (NULL);
	if (name != NULL)
		doggie->name = _strdup(name);
	else
		return (NULL);
	doggie->age = age;
	if (owner != NULL)
		doggie->owner = _strdup(owner);
	else
	{
		free(doggie->name);
		return (NULL);
	}
	return (doggie);
}
