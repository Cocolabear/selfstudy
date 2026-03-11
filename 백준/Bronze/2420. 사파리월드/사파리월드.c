#include <stdio.h>

int main(void)
{
    long long N, M;
    scanf("%lld %lld", &N, &M);
    if (N > M)
        printf("%lld", N - M);
    else
        printf("%lld", M - N);
}