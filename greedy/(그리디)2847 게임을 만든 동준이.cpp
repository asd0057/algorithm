#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>

int main() {
	int N;
	int arr[100];
	scanf_s("%d", &N);
	
	for (int i = 0; i < N; i++) {
		scanf_s("%d", &arr[i]);
	}

	int max = arr[N - 1];
	int count = 0;
	for (int i = N-2; i >= 0; i--) {
		if (max <= arr[i]) {
			count += arr[i] - (max - 1);
			max = max - 1;
		}
		else {
			max = arr[i];
		}
	}


	printf("%d", count);
}
