//
// Created by sk on 18-10-22.
//
#include <stdio.h>

int lower(int c);

int main() {
    int a;
    a = lower('B');
    printf("%d\n", 'B');
    printf("%d\n", a);
}

int lower(int c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 'a' - 'A';
    } else {
        return c;
    }
}
