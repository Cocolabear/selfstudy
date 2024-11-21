#include <stdio.h>

void convert(int n, int b) {
    char result[36];
    int index = 0;

    while (n > 0) {
        int remainder = n % b;
        if (remainder < 10) {
            result[index++] = remainder + '0';
        } else {
            result[index++] = remainder - 10 + 'A';
        }
        n /= b;
    }

    for (int i = index - 1; i >= 0; i--) {
        printf("%c", result[i]);
    }
}

int main() {
    int n, b;
    scanf("%d %d", &n, &b);
    convert(n, b);
    return 0;
}
