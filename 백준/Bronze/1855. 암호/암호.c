#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int main()
{
    int k;
    scanf("%d", &k);
    char cnt[200] = { 0, };
    scanf("%s", cnt);
    int len = strlen(cnt);
    int n = (len + k - 1) / k; 
    char** arr = (char**)malloc(n * sizeof(char*));
 
    for (int i = 0; i < n; i++) {
        arr[i] = (char*)malloc(k * sizeof(char));
    }
 
    int count = 0;
    int an = 0;
    for (int i = 0; i < n; i++) {
        if (an == 0) {
            for (int j = 0; j < k; j++) {
                if (count < len)
                    arr[i][j] = cnt[count++];
                else
                    arr[i][j] = '\0';
            }
            an = 1;
        }
        else if (an == 1) {
            for (int j = k - 1; j >= 0; j--) {
                if (count < len)
                    arr[i][j] = cnt[count++];
                else
                    arr[i][j] = '\0';
            }
            an = 0;
        }
    }
 
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n; j++) {
            printf("%c", arr[j][i]);
        }
    }
 
    for (int i = 0; i < n; i++) {
        free(arr[i]);
    }
    free(arr);
 
    return 0;
}