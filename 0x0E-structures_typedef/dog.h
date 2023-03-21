#ifndef DOG
#define DOG
/**
 * struct dog - gives info about a dog
 * @name: name of dog as string
 * @age: age of dog as float
 * @owner: name of owner as string
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /*DOG*/
