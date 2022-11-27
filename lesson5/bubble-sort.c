//
// Created by Gary on 2022/10/21.
//
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>

#define LEN 100000
int numbers[LEN] = {0};

int main() {

    for (int i = 0; i < LEN; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}