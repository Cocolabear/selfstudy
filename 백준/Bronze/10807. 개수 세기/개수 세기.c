#include <stdio.h>
int main(void)
{
    int i=0, v=0, N=0, cnt=0;
    scanf("%d", &N);
    int ary[N];

    for(i=0; i<N; i++)
    {
        scanf("%d", &ary[i]);
    }

    scanf("%d", &v);
    i=0;
    while(i<N)
    {
        if(ary[i]==v)
        {
            cnt++;
        }
        i++;
    }
    printf("%d", cnt);
}