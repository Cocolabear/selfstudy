#include <stdio.h>

int main()
{
	int x[10001][10], n, one = 0, two = 0, three = 0;  //배열 선언, 가장 큰 수, 두 번째, 세 번째 변수 선언

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			scanf("%d", &x[i][j]);                     //입력
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (one < x[i][j])                         //가장 큰 수 체크
			{
				three = two;                           //한 칸 미뤄줌
				two = one;
				one = x[i][j];
			}
			else if (two < x[i][j])                    //가장 큰 수보다 작아도 두 번째보다 큰 수
			{
				three = two;                           //두 번째부터 한 칸 미뤄줌
				two = x[i][j];
			}
			else if (three < x[i][j])                  //세 번째보다 크면 그대로 넣음.
			{
				three = x[i][j];
			}
		}
		printf("%d\n", three);                         //세 번째로 큰 수 출력
		one = 0;                                       //다음 계산을 위해 변수 초기화
		two = 0;
		three = 0;
	}
	return 0;
}