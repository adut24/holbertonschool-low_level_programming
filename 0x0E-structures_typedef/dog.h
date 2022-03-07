#ifndef DOG_H
#define DOG_H
/**
 * struct dog - all informations about the dog
 * @name: string with the name of the dog
 * @age: floating number corresponding to the age of the dog
 * @owner: string with the name of the owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
