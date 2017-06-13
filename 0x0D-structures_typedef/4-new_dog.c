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
 * _strlen - Computes string length
 * @str: The string in question
 *
 * Return: Length of the string
 */

int _strlen(char *str)
{
	int i;

	if (str == NULL)
		return (0);
	for (i = 0; str[i] != '\0'; i++)
		;
	return (++i);
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
	char *d_name, *d_owner;

	if (name == NULL || owner == NULL)
		return (NULL);
	doggie = malloc(sizeof(dog_t));
	if (doggie == NULL)
		return (NULL);
	d_name = _strdup(name);
	if (d_name == NULL)
	{
		free(doggie);
		return (NULL);
	}
	else
		doggie->name = d_name;
	doggie->age = age;
	d_owner = _strdup(owner);
	if (d_owner == NULL)
	{
		free(doggie->name);
		free(doggie);
		return (NULL);
	}
	else
		doggie->owner = d_owner;
	return (doggie);
}
