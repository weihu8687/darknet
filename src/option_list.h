#ifndef OPTION_LIST_H
#define OPTION_LIST_H
#include "list.h"

typedef struct{
    char *key;
    char *val;
    int used;
} kvp;


int read_option(char *s, dnlist *options);
void option_insert(dnlist *l, char *key, char *val);
char *option_find(dnlist *l, char *key);
float option_find_float(dnlist *l, char *key, float def);
float option_find_float_quiet(dnlist *l, char *key, float def);
void option_unused(dnlist *l);

#endif
