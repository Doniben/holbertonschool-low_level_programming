<a href="https://holbertonschool.com"><img src="https://i.ibb.co/RyBcXY6/cherry72.png" align="right" alt="cherry72" border="0"></a>

# LINKED LISTS

One disadvantage of using arrays to store data is that arrays are static structures and therefore cannot be easily extended or reduced to fit the data set. Arrays are also expensive to maintain new insertions and deletions. In this chapter we consider another data structure called Linked Lists that addresses some of the limitations of arrays.

##Compilation

gcc 4.8.4 using the flags 
```sh
-Wall -Werror -Wextra and -pedantic
```
## Written in

**GNU Emacs 24.3.1**

## Prototypes:

* ```size_t print_listint(const listint_t *h);```
* ```size_t listint_len(const listint_t *h);```
* ```listint_t *add_nodeint(listint_t **head, const int n);```
* ```listint_t *add_nodeint_end(listint_t **head, const int n);```
* ```void free_listint(listint_t *head);```
* ```void free_listint2(listint_t **head);```
* ```int pop_listint(listint_t **head);```
* ```listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);```
* ```int sum_listint(listint_t *head);```
* ```listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);```
* ```int delete_nodeint_at_index(listint_t **head, unsigned int index);```
* ```listint_t *reverse_listint(listint_t **head);```
* ```size_t print_listint_safe(const listint_t *head);```
* ```size_t free_listint_safe(listint_t **h);```
* ```listint_t *find_listint_loop(listint_t *head);```

## Functions

| Format | Usage |
| ------ | ------ |
| *print_listint* | Function that prints all the elements of a listint_t list. |
| *listint_len* | Function that returns the number of elements in a linked listint_t list. |
| *add_nodeint | Function that adds a new node at the beginning of a listint_t list. |
| *add_nodeint_end | function that adds a new node at the end of a listint_t list. |
| free_listint |  function that frees a listint_t list. |
| free_listint2 | function that frees a listint_t list. |
| pop_listint | function that deletes the head node of a listint_t linked list, and returns the head node’s data (n). |
| *get_nodeint_at_index | unction that returns the nth node of a listint_t linked list. |
| sum_listint | function that returns the sum of all the data (n) of a listint_t linked list.
| *insert_nodeint_at_index | function that inserts a new node at a given position. |
| delete_nodeint_at_index | function that deletes the node at index index of a listint_t linked list. |
| *reverse_listint | function that reverses a listint_t linked list. |
| print_listint_safe | function that prints a listint_t linked list. |
| free_listint_safe | function that frees a listint_t list. |
| *find_listint_loop | function that finds the loop in a linked list. |

### Author

 - [Doniben Jimenez](https://github.com/Doniben)