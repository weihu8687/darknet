#ifndef LIST_H
#define LIST_H
#include "darknet.h"

dnlist *make_list();
int list_find(dnlist *l, void *val);

void list_insert(dnlist *, void *);


void free_list_contents(dnlist *l);

#endif
