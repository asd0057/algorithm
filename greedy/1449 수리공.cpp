#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
bool comp2(const int& a, const int& b) {
	return a < b;
}
int main() {
	int N, L;
	int mat[1000];
	scanf_s("%d %d", &N, &L);
	int v;
	float max = -0.5;
	int count = 0;

	float a = 0.5f;
	int b = 0;

	for (int i = 0; i < N; i++) {
		scanf_s("%d", &mat[i]);
	}

	std::sort(mat, mat + N, comp2);

	for (int i = 0; i < N; i++) {
		if (max < mat[i]) {
			max = mat[i] + L - 0.5;
			count++;
		}
	}

	printf("%d", count);
}
