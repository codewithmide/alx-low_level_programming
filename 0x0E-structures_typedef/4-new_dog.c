#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
 * _strlen - returns the length of a string
 * @s: the string we are counting the characters of
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}
/**
 * _strdup - Returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * @str: the string to copy
 * Return: the address of the copied string, NULL if failed
 */
char *_strdup(char *str)
{
	unsigned int x = 0;
	unsigned int size = 0;
	char *newString;

	if (str == NULL)
		return (NULL);
	while (*(str + size))
		size++;
	newString = malloc(size * sizeof(char) + 1);
	if (newString == NULL)
	{
		free(newString);
		return (NULL);
	}
	while (x < size)
	{
		*(newString + x) = *(str + x);
		x++;
	}
	*(newString + x) = '\0';
	return (newString);
}
/**
 * new_dog - this creates a struct with the data to make a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the name of the dog's owner
 * Return: returns a pointer to the new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog = malloc(sizeof(struct dog));

	if (newdog == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->name = _strdup(name);
	if (newdog->name == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	newdog->owner = _strdup(owner);
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog->owner);
		free(newdog);
		return (NULL);
	}
	newdog->age = age;
	return (newdog);
}
