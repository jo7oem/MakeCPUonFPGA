//
// Created by su-2 on 2020/01/28.
//
#include <stdio.h>

void main(void) {
    short sum;
    asm volatile ("mov    $0, %%eax\n\t"
        "mov    $1, %%ebx\n\t"
        "LOOP1: cmp $11, %%ebx\n\t"
        "je MOUT\n\t"
        "add    %%ebx,   %%eax\n\t"
        "inc    %%ebx\n\t"
        "jmp    LOOP1\n\t"
        "MOUT:  mov  %%eax, %0\n\t"
        :"=r"(sum));
    printf("sum= %d \n",sum);
}