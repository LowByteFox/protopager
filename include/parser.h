#ifndef _PARSER_H_
#define _PARSER_H_

#include <stdbool.h>

#include "types.h"

struct macro {
    const char *name;
    const bool callable;
    void (*parsed)(struct document *d);
    /* TODO: args */
};

void parse_document(struct document *doc);

#endif
