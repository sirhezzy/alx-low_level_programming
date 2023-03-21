#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - Finds the length of a string.
 * @str: The string to be measured.
 * Return: The length of the string.
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - copies a string pointed to by src
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * Return: The pointer to dest.
 */

char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog.
 * Description: creates info for a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 * Return: The new struct dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *snoopy;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	snoopy = malloc(sizeof(dog_t));
	if (snoopy == NULL)
		return (NULL);

	snoopy->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (snoopy->name == NULL)
	{
		free();
		return (NULL);
	}

	snoopy->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (snoopy->owner == NULL)
	{
		free(snoopy->name);
		free(snoopy);
		return (NULL);
	}

	snoopy->name = _strcopy(snoopy->name, name);
	snoopy->age = age;
	snoopy->owner = _strcopy(snoopy->owner, owner);

	return (snoopy);
}
