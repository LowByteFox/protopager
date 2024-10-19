#include "include/parser.h"
#include "include/types.h"
#include <stdio.h>
#include <string.h>

#define MACRO_LEN 3 + 1
#define BFSIZE 512

static void skip_comment(struct document *d);

static const struct macro macros[] = {
    {"\\\"", 0, skip_comment},
    {"Dt", 0, NULL},
    {NULL, 0, NULL}
};

void parse_document(struct document *doc)
{
    char buff[MACRO_LEN];

    fgets(buff, MACRO_LEN, doc->file);

    const struct macro *iter = macros;

    while (iter->name != NULL) {
        if (strncmp(iter->name, buff + 1, MACRO_LEN - 2) == 0)
            if (iter->parsed != NULL)
                iter->parsed(doc);

        iter++;
    }
}

static void skip_comment(struct document *d)
{
    char buff[BFSIZE];

    do {
        fgets(buff, BFSIZE, d->file);
    } while (strlen(buff) == BFSIZE - 1);
}
