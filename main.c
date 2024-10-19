#include "include/document.h"
#include "include/parser.h"
#include "include/types.h"

int main(int argc, char **argv) {
    if (argc == 1)
        return 1;

    struct document doc = {0};

    init_document(&doc, argv[1]);

    parse_document(&doc);

    return 0;
}
