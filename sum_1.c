//
// Created by su-2 on 2020/01/23.
//
#include <stdio.h>

int i;
int sum;

void main(void) {
    sum = 0;
    for (i = 1; i <= 10; i++) {
        sum = sum + i;
    }
    printf("sum = %d\n", sum);
}

