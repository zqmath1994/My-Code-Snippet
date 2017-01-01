/* function:
 * date:
 * author:zqmath1994
 */

#include<stdio.h>

// 判断字节序函数
void byteorder()
{
    union
    {
        short value;
        char union_bytes[sizeof(short)];
    } test;
    test.value = 0x0102;
    if ((test.union_bytes[0] == 1) && (test.union_bytes[1] == 2))
    {
        printf("big endian\n");
    }
    else if ((test.union_bytes[0] == 2) && ( test.union_bytes[1] == 1))
    {
        printf("little endian\n");
    }
    else
    {
        printf("unknown...\n");
    }

}
int main (int argc, char const* argv[]) {
    byteorder();
    return 0;
}
