#ifndef HEADERFILE_H
#define HEADERFILE_H
/**
 * struct dog - details of a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog.
 *
 * Description: it is the primary details of a dog
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

#endif
