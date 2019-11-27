#include <stdio.h>

typedef struct linkedlist
{
    char *buf;
    struct linkedlist *next;
} LL;

void push_head(LL *new_head, LL **list);
LL *pop_head(LL **list);
int is_png(char *buf);
