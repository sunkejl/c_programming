//
// Created by sk on 18-11-3.
//
#include <stdio.h>

int my_binsearch();
int main() {
    int x=4;
    int v[]={1,2,3,4,5,6};
    int location ;

    int s;
    s=(int)(sizeof(v))/4;
    printf("%d\n",s);
    location = my_binsearch(x,v,s);
    printf("%d",location);

    return 0;
}

int my_binsearch(int x, int v[], int n) {
    int low, high, mid;

    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (x < v[mid]) {
            high = mid - 1;
        } else if (x > v[mid]) {
            low = mid + 1;
        } else {
            return mid;
        }
    }
    return -1;
}
