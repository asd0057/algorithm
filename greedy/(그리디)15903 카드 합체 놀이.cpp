#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
//정렬의 속도 https://choijason.tistory.com/6
// 우선순위큐 사용법
//sort에 comp를 넣으면 선택정렬로 정렬하는듯?.. 원래는 퀵소트임.
bool comp(long long int a, long long int b) {
	if (a < b) {
		return true;
	}
	else {
		return false;
	}
}
int main() {
	int n, m;
	long long int a[1000];
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++) {
		scanf("%lld", &a[i]);
	}

	for (int i = 0; i < m; i++) {
		std::sort(a, a + n, comp);
		long long int sum = a[0] + a[1];
		a[0] = sum;
		a[1] = sum;
	}

	long long int min = 0;
	for (int i = 0; i < n; i++) {
		min += a[i];
	}

	printf("%lld", min);
}
