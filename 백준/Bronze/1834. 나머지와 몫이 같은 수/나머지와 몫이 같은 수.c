#include <stdio.h>
int main(){
    
    long N;
    long sum = 0;
    
    scanf("%ld",&N);
    
    for(int i=0;i<N;i++)
    {
        sum+=(i*N+i);
    }
    
    printf("%ld\n",sum);
    return 0;
}