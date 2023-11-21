#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, max, re=0, len;
    char arr[1000000];
    int cnt[26] = {0, };
    int sel = 0;
    
    scanf("%s", arr);
    len = strlen(arr);
    
    for(i = 'a'; i <= 'z'; i++)
    {
        for(j = 0; j < len; j++)
        {
           if(i == arr[j])
               cnt[i-'a']++;
        }
    }
    for(i = 'A'; i <= 'Z'; i++)
    {
        for(j = 0; j < len; j++)
        {
           if(i == arr[j])
               cnt[i-'A']++;
        }
    }
    
    max = cnt[0];
    for(i = 1; i < 26; i++)
    {
        if(max < cnt[i])
        {
            max = cnt[i];
            sel = i;
        }
    }
    
    for(i = 0; i < 26; i++)
    {
        if(max == cnt[i])
            re++;
    }
    
    if(re > 1)
        printf("?\n");
    else
        printf("%c", sel+'A');
    return 0;
}