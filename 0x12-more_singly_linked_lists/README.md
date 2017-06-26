# More Singly Linked Lists

![More Singly Linked Lists](https://raw.githubusercontent.com/srinitude/holbertonschool-low_level_programming/master/0x12-more_singly_linked_lists/MoreSinglyLinkedLists.jpg)

Credits: [Mechanoid](http://mechanoid.tumblr.com/post/47047051199)

## Table of Contents
* [Write a function that prints all the elements of a listint_t list.](https://github.com/srinitude/holbertonschool-low_level_programming/blob/master/0x12-more_singly_linked_lists/0-print_listint.c)
  * Prototype: `size_t print_listint(const listint_t *h);`
  * Return: the number of nodes
  * You are allowed to use `printf`
* [Write a function that returns the number of elements in a linked listint_t list.](https://github.com/srinitude/holbertonschool-low_level_programming/blob/master/0x12-more_singly_linked_lists/1-listint_len.c)
  * Prototype: `size_t listint_len(const listint_t *h);`
* [Write a function that adds a new node at the beginning of a `listint_t` list.](https://github.com/srinitude/holbertonschool-low_level_programming/blob/master/0x12-more_singly_linked_lists/2-add_nodeint.c)
  * Prototype: `listint_t *add_nodeint(listint_t **head, const int n);`
  * Return: the address of the new element, or `NULL` if it failed
* [Write a function that adds a new node at the end of a `listint_t` list.](https://github.com/srinitude/holbertonschool-low_level_programming/blob/master/0x12-more_singly_linked_lists/3-add_nodeint_end.c)
  * Prototype: `listint_t *add_nodeint_end(listint_t **head, const int n);`
  * Return: the address of the new element, or `NULL` if it failed
* [Write a function that frees a `listint_t` list.](https://github.com/srinitude/holbertonschool-low_level_programming/blob/master/0x12-more_singly_linked_lists/4-free_listint.c)
  * Prototype: `void free_listint(listint_t *head);`
* [Write another function that frees a `listint_t` list.](https://github.com/srinitude/holbertonschool-low_level_programming/blob/master/0x12-more_singly_linked_lists/5-free_listint2.c)
  * Prototype: void `free_listint2(listint_t **head);`
  * The function sets the `head` to `NULL`
* [Write a function that deletes the head node of a `listint_t` linked list, and returns the head node's data (n).](https://github.com/srinitude/holbertonschool-low_level_programming/blob/master/0x12-more_singly_linked_lists/6-pop_listint.c)
  * Prototype: `int pop_listint(listint_t **head);`
  * If the linked list is empty, return 0.
* [Write a function that returns the nth node of a `listint_t` linked list.](https://github.com/srinitude/holbertonschool-low_level_programming/blob/master/0x12-more_singly_linked_lists/7-get_nodeint.c)
  * Prototype: `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);`
  * where `index` is the index of the node, starting at `0`
  * If the node does not exist, return `NULL`
