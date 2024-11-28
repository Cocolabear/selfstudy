#include<stdio.h>
#include<string.h>
int main()
{
	int count=0;
	char a[1000001];
	scanf("%[^\n]", a);
	for(int i=0; i<strlen(a); i++)
	{
		if(a[i]==32)
			count++;
	}
	if(a[0]==32)
		count--;
	if(a[strlen(a)-1]==32)
		count--;
	printf("%d", count+1);
    return 0;
}