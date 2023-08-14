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
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - dog structure
 */
typedef struct dog dog_t;
#endif
#ifndef _FUNCTIONS_H
#define _FUNCTIONS_H
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strdup(char *str);
#endif
