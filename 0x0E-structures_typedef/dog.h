#ifndef Dog
#define Dog
/**
 * struct dog - Dogs information
 * @name: dog's name
 * @age: age of the dog
 * @owner: owner's nae
 * Description: General information abaout a dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

int _putchar(char c);

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);



#endif
