#ifndef DOG
#define DOG

/**
 * struct dog - Representation of a dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Description: Here's our initial model of how we want to represent
 * a dog. This may expand or contract later on.
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG */
