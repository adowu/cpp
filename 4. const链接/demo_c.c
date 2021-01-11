#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    // 告诉编译器在外部找 a
    extern const int a;
    printf("%d", a);
    return 0;
}