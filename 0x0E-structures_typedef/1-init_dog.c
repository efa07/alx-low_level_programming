#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - varibale of type struct dog
 * @d:array
 * @name: name
 * @age: age
 * @owner: owner
 * Description: dscription
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
