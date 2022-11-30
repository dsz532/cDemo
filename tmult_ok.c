#include <stdio.h>
int tmult_ok(int x, int y)
{
    int p = x * y;
    return !x || p / x == y;//x为0时，!x直接为真，返回1
}                           //x不为0，y为0时，p/x==0==y,返回1
                            //x*y发生溢出时，其补码乘法的结果一定小于真实结果x*y，因此补码乘法的结果p/x一定小于x*y/x=y，返回0
                            //故该测试函数可靠