#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - it returns the length of the string
 * @s: the string to be evaluated
 *
 * Return: returns the length of the string
 */
int _strlen(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}

/**
 *_strcpy - it copies the pointed string
 * @dest: pointer to the buffer in which we copy the string
 * @src: the string to be copied
 *
 * Return: returns the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int jess, a;

	jess = 0;

	while (src[jess] != '\0')
	{
		jess++;
	}

	for (a = 0; a < jess; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}

/**
 * new_dog - it creates a new dog line
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: return the pointer to the new dog (Success), NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int jess1, jess2;

	jess1 = _strlen(name);
	jess2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	return (NULL);

	dog->name = malloc(sizeof(char) * (jess1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (jess2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;


	return (dog);
}
