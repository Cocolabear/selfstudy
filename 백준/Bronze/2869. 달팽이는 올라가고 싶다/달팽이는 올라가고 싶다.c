#include <stdio.h>
 
int main()
{
    
    int A, B, V, d;
 
    scanf("%d %d %d", &A, &B, &V);
 
    d = (V-B)/(A-B);
    if ((V - B) % (A - B) != 0)
        d += 1;
    printf("%d\n", d);
 
    return 0;
}