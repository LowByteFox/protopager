#ifndef _TYPES_H_
#define _TYPES_H_

struct document {
    char *date;
    char *title;
    char *os;
    char *name;
    char *description;
    int section;

    const char *filename;
};

#endif
