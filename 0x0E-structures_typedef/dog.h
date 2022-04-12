#ifndef DOG
#define DOG

/**
 * struct dog - a struct of dog having its name, age and owner
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: this is a struct of a dog with its name, age and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif
