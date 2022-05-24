#include "lists.h"
#include "stdlib.h"
/**
 * add_node - Adds a new node to the beggining of a linked list
 * @head: pointer to the head 
 * Return:  address to the new elemnt else NULL
 */
list_t *add_node(list_t **head, const char *str)
{
    char *dup;
    int len;
    list_t *n;

    n = malloc(sizeof(list_t));
    if (n == NULL)
    {
        return (NULL);
    }
    dup = strdup(str);
    if (dup == NULL)
    {
        free(n);
        return (NULL);
    }
    for (len = 0; str[len];)
    {
        len++;
    }
    n->str = dup;
    n->len = len;
    n->next = *head;

    *head = n;

    return (n);

}