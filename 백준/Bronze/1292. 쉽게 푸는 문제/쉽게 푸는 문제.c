#include<stdio.h>  

int main() 
{

    int first = 0, last = 0;
    int sum = 0, pp = 1, cnt = 1;

    scanf("%d %d", &first, &last);

    for (int i = 1; cnt <= last; i++) {
        for (int j = 1; j <= pp; j++) {
            if (cnt >= first) {
                sum += pp;
            } 
            cnt++;
            if (cnt > last) {
                break;
            }
        }
        pp++;
    }
    
    printf("%d", sum);

    return 0;
}