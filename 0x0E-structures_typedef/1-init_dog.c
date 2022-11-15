#include "dog.h"

/**
*init_dog - initializes struct dog
*@d: pointer to struct
*@name: pointer to dog name
*@age: dog age
*@owner: pointer to dog owner
*Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
