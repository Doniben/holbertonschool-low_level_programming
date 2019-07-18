#ifndef PERRI
#define PERRI
/**
 * struct dog - The beautiful dog is going to talk
 * @name: Name of the beautiful dog
 * @age: Age of the dog
 * @owner: Name of the slave of the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
