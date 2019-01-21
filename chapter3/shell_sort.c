#include <stdio.h>
void main(){
    int i[10]={9,1,2,3,4,5,6,7,8,0};
    void shell_sort_my();
    shell_sort_my(i,10);
}

void shell_sort_my(int v[], int n)
{
    int gap, i, j, temp;

    for (gap = n/2; gap > 0; gap /= 2)
        for (i = gap; i < n; i++)
            for (j=i-gap; j>=0 && v[j]>v[j+gap]; j-=gap) {
                temp = v[j];
                v[j] = v[j+gap];
                v[j+gap] = temp;
            }
   for(int k=0;k<10;k++) {
       printf("%d",v[k]);
   }
}