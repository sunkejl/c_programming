//
// Created by sk on 18-10-19.
//
#include <stdio.h>

int main() {
    int c;
    c = getchar();
    switch (c) {
        case 'a':
            printf("%c\n",c);
            break;
        case 'b':
            printf("%c\n",c);
            break;
        default:
            printf("not in switch \n");
            break;
    }
    return 0;
}

