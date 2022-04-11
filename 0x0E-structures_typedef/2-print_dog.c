#include "dog.h"

#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 * @d: points to struct of the dog informati
 * Description: General information abaout a dog
 */
void print_dog(struct dog *d)
{
	if (d == 0)
		return;
	if (d->name == 0)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (d->owner == 0)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
