#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, ky;
	scanf("%d %d", &n, &ky);
	int temp = n;
	int* arr = (int*)malloc(sizeof(int*) * n);
	for (int i = 0; i < n; i++) {
		scanf("%d,", &arr[i]);
	}
	while (n - ky != temp) {
		for (int i = 0; i < temp - 1; i++) {
			arr[i] = arr[i + 1] - arr[i];
		}
		temp -= 1;
	}
	for (int i = 0; i < temp; i++) {
		printf("%d", arr[i]);
		if(i!=temp-1) printf(",");
	}
	return 0;
}
