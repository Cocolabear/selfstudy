#include<stdio.h>

int main()
{
	char arr[50][50] = { 0,};
	int R;
	int T;

	scanf("%d %d", &R, &T);
	for (int i = 0; i < R; i++)
		scanf("%s", arr[i]);
    
	int tempR = R;
	int tempT = T;
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < T; j++)
		{
			if (arr[i][j] == 'X')
			{
				tempR--;
				break;
			}
		}
	}
	for (int i = 0; i < T; i++)
	{
		for (int j = 0; j < R; j++)
		{
			if (arr[j][i] == 'X')
			{
				tempT--;
				break;
			}
		}
	}

	if (R == 1)printf("%d\n", tempT);
	else if (T == 1) printf("%d\n", tempR);
	else printf("%d\n", tempR < tempT ? tempT : tempR);

	return 0;
}