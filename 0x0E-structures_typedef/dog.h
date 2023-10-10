#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Dog's structure
 * @name: name of the beautifull dog
 * @age: his age :)
 * @owner: the owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

#endif
