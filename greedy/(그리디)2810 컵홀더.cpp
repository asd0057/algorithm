#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>

int main() {
	int count = 2;
	int N;
	char a[51];
	scanf("%d", &N);
	scanf("%s", &a);
	int couple = 0;
	for (int i = 0; i < N-1; i++) {
		if (a[i] == 'S') {
			count++;
		}
		else {
			if (couple == 0) {
				couple++;
				continue;
			}
			else {
				couple = 0;
				count++;
			}
		}
	}

	if (count > N) {
		count = N;
	}
	printf("%d", count);
}
