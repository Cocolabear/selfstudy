#include <stdio.h>

int main(void)
{
	int n, m;
	int card[100] = {0, };
	int sum, max = 0;
    
	scanf("%d %d", &n, &m);
    
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &card[i]);
	}
    
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			for (int k = j+1; k < n; k++)
			{
				sum = card[i] + card[j] + card[k];
				if (sum > max && sum <= m)
				{
					max = sum;
				}
			}
		}
	}
	printf("%d", max);

	return 0;
}