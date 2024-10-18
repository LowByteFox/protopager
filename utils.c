#include <stddef.h>
#include "include/utils.h"

static const char *const sections[] = {
    [1] = "General Commands",
    [2] = "System Calls",
    [3] = "Library Functions",
    [4] = "Device Drivers",
    [5] = "File Formats",
    [6] = "Games",
    [7] = "Miscellaneous Information",
    [8] = "System Manager's Manual"
};

const char *const get_section_name(int id) {
    if (id < 1 || id > 8)
        return NULL;

    return sections[id];
}
