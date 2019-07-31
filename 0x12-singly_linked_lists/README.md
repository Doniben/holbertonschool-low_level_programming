[![N|Solid](https://blog.holbertonschool.com/wp-content/uploads/2019/06/cherry72-942x1024.png)](http://holbertonschool.com)

## LINKED LISTS

One disadvantage of using arrays to store data is that arrays are static structures and therefore cannot be easily extended or reduced to fit the data set. Arrays are also expensive to maintain new insertions and deletions. In this chapter we consider another data structure called Linked Lists that addresses some of the limitations of arrays.

##Compilation

gcc 4.8.4 using the flags 
```sh
-Wall -Werror -Wextra and -pedantic
```
## Written in

**GNU Emacs 24.3.1**

## Prototypes:

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
int _strlen(char *s);

## Functions

| Format | Usage |
| ------ | ------ |
| print_list | prints all the elements of a list_t list |
| list_len | returns the number of elements in a linked list_t list. |
| add_node | adds a new node at the beginning of a list_t list. |
| add_node_end | adds a new node at the end of a list_t list. |
| free_list |  frees a list_t list. |
| first | Prints a text before the main function is executed. |
| Assembler | program in assembly that prints Hello, Holberton |

### Authors

 - [Doniben Jimenez](https://github.com/Doniben)