#include <stdint.h>

#ifndef DEBUG
#define DEBUG

/*
    Print the size bytes starting at to_print in the format:
    "[B1 B2 ... Bn]\n"
 */
void print_bytes(void * to_print, uint32_t size);

#endif
