#include <stdio.h>

int main(void)
{
    int N,T,P,sum=0,i=0,cnt=0;
    int size[1000000]={0};
    int answer[2]={0};
    scanf("%d",&N);
    while(cnt < 6)
    {
        scanf("%d", &size[i]);
        sum += size[i];
        i++;
        cnt++;
    }
    scanf("%d %d",&T,&P);
    for(int j=0; j<cnt; j++)
    {
        answer[0] += (size[j] + T - 1) / T;
    }
    answer[1] = N / P;
    answer[2] = N % P;
    printf("%d\n", answer[0]);
    printf("%d %d\n", answer[1], answer[2]);
}