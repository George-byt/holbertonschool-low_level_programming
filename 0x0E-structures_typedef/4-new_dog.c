#include "dog.h"
/**
 * _strlen - Return the length of a string.
 * @s: String to evaluete.
 * Return: length of a string.
 */
int _strlen(cha *s)
{
int i;
i = 0;
while (s[i] != '\0')
i++;
i++;
return (i);
}
/**
 * new_strcpy - Copy second string to buffer of first string.
 * @dest: Pointer to empty dest.
 * @src: String to copy.
 * Return: Pointer to dest.
 */
char *new_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
dest[i] = src[i];
return (dest);
}
/**
 * new_dog - create a new dog.
 * @name: Name of dog.
 * @age: Age of dog.
 * @owner: Name of owner.
 * Return: Pointer to new struct dog_t (SUCCES), NULL (FAILURE).
 */
dog_t *new_dog(char *name, float age, char *owner)
{




}
