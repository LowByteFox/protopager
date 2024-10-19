#ifndef _TYPES_H_
#define _TYPES_H_

#include <stdio.h>

struct document {
    char *date;
    char *title;
    char *os;
    char *name;
    char *description;
    int section;

    FILE *file;
};

#endif
