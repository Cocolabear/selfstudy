#include <stdio.h>

int main()
{
    int div = 0; 
    long long max = 0, min = 1000001; 

    int n; 
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    { 
        scanf("%d", &div);

        if(div > max)                
            max = div;
        if(div < min)
            min = div;
    }

    printf("%lld\n", max * min);

    return 0;
}
