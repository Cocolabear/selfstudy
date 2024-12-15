#include <stdio.h>

int facto (int n) {
    int sol=1;
    while (n > 1) {
        sol*=n--;
    }
    return sol;
}

int comb (int n, int r) {
    return facto(n) / (facto(r) * facto(n-r));
}

int main () {
    int n, r;

    scanf("%d %d", &n, &r);
    printf("%d", comb(n, r));
    
    return 0;
}