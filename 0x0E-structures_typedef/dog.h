#ifndef DOG_H
#define DOG_H
/**
 * struct dog - all informations about the dog
 * @name: string with the name of the dog
 * @age: floating number corresponding
 * @owner: string with the name of the owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
