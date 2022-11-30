#include <stdio.h>
#include "showbytes.c"
#include "intoverflow.c"
typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len);

void show_int(int x);

void show_float(float x);

void show_pointer(void *x);

int uadd_ok(unsigned x,unsigned y);

int tadd_ok(int x,int y)