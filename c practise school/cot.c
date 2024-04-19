#include <stdio.h>

int main() {
    int a[] = {10,20,30};
    int b[] = {1,2,3};
    for(int i=0;i<3;i++) {
        printf("  %d \n",a[i] + b[i]);
    }
}