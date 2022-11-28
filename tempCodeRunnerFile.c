    short sx = -12345;  //补码数的符号扩展
    unsigned short usx = sx;
    int x = sx;
    unsigned ux = usx;

    printf("sx = %d:\t", sx);
    show_bytes((byte_pointer)&sx, sizeof(short));

    printf("usx = %u:\t", usx);
    show_bytes((byte_pointer)&usx, sizeof(short));

    printf("x = %d:\t", x);
    show_bytes((byte_pointer)&x, sizeof(short));

    printf("ux = %u:\t", ux);
    show_bytes((byte_pointer)&ux, sizeof(short));