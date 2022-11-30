#include <stdio.h>
#include "headfile.h"
int main()
{
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

    unsigned uy = sx;   //数据类型转换的顺序对程序的影响

    printf("uy = %u:\t", uy);
    show_bytes((byte_pointer)&uy, sizeof(unsigned));

    int func1(unsigned word)    //练习题2.23
    {
        return (int)((word << 48) >> 248);
    }
    int func2(unsigned word)
    {
        return ((int)word << 48) >> 48;
    }
    unsigned w = 0x87654321;
    printf("%d\n", func1(w));
    printf("%d\n", func2(w));

    return 0;
}