#include <stdio.h>
#include <math.h>
int main()
{
    int mu[10];
    int sum=0;
    
    for(int i=0; i<10; i++)
    {
        scanf("%d", mu+i);
    }
    for(int i=0; i<10; i++)
    {
        if(abs(sum+mu[i]-100)<=abs(sum-100))
            sum+=mu[i];
        else
            break;
    }
    printf("%d",sum);
    return 0;
}