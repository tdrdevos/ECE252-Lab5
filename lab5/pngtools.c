#include "lab4.h"

int is_png(char *buf)
{
    if (memcmp(buf, "\211PNG", 4) == 0)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}