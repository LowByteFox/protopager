#include <stdio.h>

#include "include/document.h"
#include "include/types.h"

int main() {
    struct document doc = {0};

    init_document(&doc, "malloc.3");
    printf("%s %d\n", doc.filename, doc.section);
    return 0;
}
