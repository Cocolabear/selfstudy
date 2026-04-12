#include <stdio.h>

int main(void) {
    int arr[10];
    int remainder[42] = {0};
    int cnt = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++) {
        int r = arr[i] % 42;
        if (remainder[r] == 0) {
            remainder[r] = 1;
            cnt++;
        }
    }
    printf("%d\n", cnt);
}