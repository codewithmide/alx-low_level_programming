0x12. C - Singly linked lists
A linked list is a linear data structure where each element is a separate object. Linked list elements are not stored at contiguous location; the elements are linked using pointers. Each node of a list is made up of two items - the data and a reference to the next node. The last node has a reference to null.

![image](https://user-images.githubusercontent.com/81376427/164456812-e11a63bc-5402-4feb-bea1-076e217fc2f1.png)

Array VS Linked List

![image](https://user-images.githubusercontent.com/81376427/164456884-3dbf91b6-3fc0-45bb-966f-0d08e3aa6b60.png)

LINKED LIST	ARRAY
[ ] We can add elements indefinitely to a linked list	[x] We can add elements indefinitely to an array
[x] Linked list can contain as value a structure	[x] Array can contain as value a structure
[x] We can easily removed an element from a Linked list	[ ] We can easily removed an element from an Array
[ ] Memory is aligned for a Linked list - each elements are back to back in the memory	[x] Memory is aligned for an Array - each elements are back to back in the memory


What is a data structure?
Data structures, as the term implies, are a way of structuring data in order to efficiently store, find, use, and create data, depending on the task at hand. If data is a plate of food, data structures are your utensils (algorithms would be how to effectively use those utensils in this analogy). Just as you will likely select a spoon to eat a bowl of soup rather than a knife, you will learn over time to select and properly use data structures which fit the nature of the data you are working with.

Example
Function that prints all the elements of a list_t list.

First make the structure for the nodes.

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

After that create a function that print the content of each node and count every node on a int variable

#include "lists.h"
/**
 * print_list -  prints all the elements of a list_t list.
 * @h: Adress of the head of the linked list to print
 *
 * Return: Unsigned int with the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t j = 0;

	while (h != '\0')
	{
		if (h->str == '\0')
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		j++;
		h = h->next;
	}
	return (j);
}
Finally create a main function calling the function to print and return the int value

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	list_t *head;
	list_t *new;
	list_t hello = {"World", 5, NULL};
	size_t n;

	head = &hello;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (1);
	}
	new->str = strdup("Hello");
	new->len = 5;
	new->next = head;
	head = new;
	n = print_list(head);
	printf("-> %lu elements\n", n);

	printf("\n");
	free(new->str);
	new->str = NULL;
	n = print_list(head);
	printf("-> %lu elements\n", n);

	free(new);
	return (0);
}
Output
[5] Hello
[5] World
-> 2 elements

[0] (nil)
[5] World
-> 2 elements
