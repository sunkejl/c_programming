//
// Created by sk on 18-10-22.
//
#include <stdio.h>

int atoi(char s[]);

int main() {
    int a;
    a = atoi("1234abc");
    printf("%d\n", a);
    return 0;
}

int atoi(char s[]) {
    int i, n;
    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i) {
        n = 10 * n + (s[i] - '0');
    }
    return n;
}
