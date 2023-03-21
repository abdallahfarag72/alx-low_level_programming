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
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /*DOG*/
