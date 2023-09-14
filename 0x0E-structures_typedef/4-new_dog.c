#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - find length of a string
 * @str: input
 * Return: len
 */
int _strlen(const char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
 * *_strcpy - copy from the original to another one
 * @dest: input
 * @origin: input
 * Return: dest
 */
char *_strcpy(char *dest, char *origin)
{
	int i;

	for (i = 0; origin[i] != '\0'; i++)
		dest[i] = origin[i];
	dest[i] = '\0';

	return (dest);
}

/**
 * *new_dog - function that creates a new dog
 * @name: input
 * @age: input
 * @owner: input
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!(name) || age < 0 || !(owner))
		return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);

	return (dog);
}