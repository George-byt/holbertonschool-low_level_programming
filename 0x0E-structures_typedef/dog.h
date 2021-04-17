#ifndef DOG_H
#define DOG_H
/**
 * dog_t - typedef for dog.
 */
typedef struct dog dog_t;
/**
 * struct dog - structure
 * @name: name
 * @age: age
 * @owner: owner
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
char *new_strcpy(char *dest, char *src);
void free_dog(dog_t *d);
#endif
