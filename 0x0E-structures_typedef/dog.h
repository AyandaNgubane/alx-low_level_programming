#ifndef STRUCTS
#define STRUCTS
/**
 * struct dog - dog information
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: Longer description
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
#ifndef FUNCTIONS_H
#define FUNCTIONS_H
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
