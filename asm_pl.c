//
// Created by su-2 on 2020/01/29.
//
#include <stdio.h>

void main(void) {
    int a=0,b=1;
    printf("a=%d\tb=%d\n",a,b);
    asm volatile(
            "mov    $2, %0;"
            :"=r"(b)
            :"r"(a));
   printf("a=%d\tb=%d\n",a,b);
}
