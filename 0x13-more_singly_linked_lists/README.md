File Structure:
lists.h:
The lists.h file contains function prototypes.

File Prototype:
typedef struct listint_s
{
int n;
struct listint_s *next;
} listint_t;

0-print_listint.c:
A C function that prints all the elements of a listint_t linked list and returns the number of nodes in the listint_t list.

1-listint_len.c:
A C function that returns the number of elements in a listint_t linked list.

2-add_nodeint.c:
A C function that adds a new node at the beginning of a listint_t linked list. If the function fails, it returns NULL. Otherwise, it returns the address of the new element.

3-add_nodeint_end.c:
A C function that adds a new node at the end of a listint_t linked list. If the function fails, it returns NULL. Otherwise, it returns the address of the new element.

4-free_listint.c:
A C function that frees a listint_t linked list.

5-free_listint2.c:
A C function that frees a listint_t linked list and sets the head to NULL.

6-pop_listint.c:
A C function that deletes the head node of a listint_t linked list. If the linked list is empty, it returns 0. Otherwise, it returns the head node's data (n).

7-get_nodeint.c:
A C function that locates a given node of a listint_t linked list. If the node does not exist, it returns NULL. Otherwise, it returns the located node.

8-sum_listint.c:
A C function that returns the sum of all the data (n) of a listint_t linked list. If the linked list is empty, it returns 0. Otherwise, it returns the sum of all the data (n).

9-insert_nodeint.c:
A C function that inserts a new node to a listint_t linked list at a given position. If it is not possible to add the new node at index idx or the function fails, it returns NULL. Otherwise, it returns the address of the new node.

10-delete_nodeint.c:
A C function that deletes the node at a given index of a listint_t linked list. If the function succeeds, it returns 1. If the function fails, it returns -1.

100-reverse_listint.c:
A C function that reverses a listint_t linked list using a maximum of one loop and two variables. It returns a pointer to the first node of the reversed list.

101-print_listint_safe.c:
A C function that prints a listint_t linked list safely (i.e., can free lists containing loops). It returns the number of nodes in the listint_t list.

102-free_listint_safe.c:
A C function that frees a listint_t linked list safely (i.e., can free lists containing loops). It returns the size of the list that was freed and sets the head to NULL.

103-find_loop.c:
A C function that finds the loop contained in a listint_t linked list using a maximum of two variables. If no loop is found, it returns NULL. Otherwise, it returns the address of the node where the loop starts.
