//
// Created by sk on 18-10-17.
//
#include <stdio.h>

#define MAXLINE 1000

int getlinec(char line[], int maxline);

void copy(char to[], char form[]);

int main() {
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = getlinec(line, MAXLINE)) > 0) {
        printf("%d\n", len);
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }
    printf("max:%d\n", max);
    if (max > 0) {
        printf("longest:%s", longest);
    }
    return 0;
}

int getlinec(char s[], int lim) {
    int i;
    int c;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        printf("char: %d\n", c);
        s[i] = c;
    }

    if (c == '\n') {
        printf("n:%d\n", c);
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[]) {
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}

