#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to new dog, or NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	char *nameCopy, *ownerCopy;
	int nameLen, ownerLen, i;

	nameLen = ownerLen = 0;
	while (name[nameLen] != '\0')
		nameLen++;
	while (owner[ownerLen] != '\0')
		ownerLen++;
	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);
	nameCopy = malloc(sizeof(char) * (nameLen + 1));
	if (nameCopy == NULL)
	{
		free(newDog);
		return (NULL);
	}
	ownerCopy = malloc(sizeof(char) * (ownerLen + 1));
	if (ownerCopy == NULL)
	{
		free(nameCopy);
		free(newDog);
		return (NULL);
	}
	for (i = 0; i <= nameLen; i++)
		nameCopy[i] = name[i];
	for (i = 0; i <= ownerLen; i++)
		ownerCopy[i] = owner[i];
	newDog->name = nameCopy;
	newDog->age = age;
	newDog->owner = ownerCopy;
	return (newDog);
}
