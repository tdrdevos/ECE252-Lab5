#include "lab4.h"

void push_head(LL *new_head, LL **list)
{
    new_head->next = *list;
    *list = new_head;
}

LL *pop_head(LL **list)
{
    if (*list == NULL)
    {
        return NULL;
    }
    LL *return_node = *list;
    *list = (*list)->next;
    return return_node;
}