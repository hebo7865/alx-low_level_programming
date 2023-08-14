#include <stdlib.h>
#include "dog.h"
/**
  * _strlen - to get length of string
  * @s: string input
  * Return: always 0
  */
int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}

/**
  * _strcpy - copy string pointed by str
  * @des: destination to copy string to
  * @str: string we wanted to copy
  * Return: always 0
  */
char *_strcpy(char *des, char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		des[i] = str[i];
	}
	des[i] = '\0';
	return (des);
}

/**
  * new_dog - creat a new dog
  * @name: dog name
  * @age: dog age
  * @owner: dog owner
  * Return: always 0
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
	{
		return (NULL);
	}
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
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
