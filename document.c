#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

#include "include/document.h"

void init_document(struct document *doc, const char *filename)
{
    assert(doc != NULL);
    assert(filename != NULL);

    const char *basename = strrchr(filename, '/');
    if (basename != NULL)
        basename += 1;
    else
        basename = filename;

    const char *section = strrchr(basename, '.') + 1;
    doc->section = atoi(section);
    doc->file = fopen(filename, "r");
}
