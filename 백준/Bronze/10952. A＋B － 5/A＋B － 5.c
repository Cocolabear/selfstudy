#include <stdio.h>
int main(void)
{
    int A=0, B=0;;
    while(1)
    {
        scanf("%d %d",&A, &B);
        if(A+B==0)
            break;
        else
            printf("%d\n", A+B);
    }
}