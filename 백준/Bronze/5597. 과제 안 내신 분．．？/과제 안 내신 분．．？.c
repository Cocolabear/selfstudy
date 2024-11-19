#include <stdio.h>

int main() {
    int ary[31] = {0}; 
    int n, i;

    for (i = 0; i < 28; i++) {
        scanf("%d", &n);
        ary[n] = 1; 
    }

    for (i = 1; i <= 30; i++) {
        if (ary[i] == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
