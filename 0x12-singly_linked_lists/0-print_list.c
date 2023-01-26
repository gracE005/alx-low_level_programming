#include <stdio.h>
#include "list.h"

/**
 * printf_list - prints all the elmements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of node printed
 */
size_t print_list(const list_t *h)
{
size_t s = 0;

while (h)
{
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->net;
s++
}

return (s)
}
