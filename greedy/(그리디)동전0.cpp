#include<stdio.h>
#include<algorithm>
using namespace std;

//입력은 n과, k, n개의 동전값
// 단 하나의 최적의 해를 가지고 있기 떄문에 그리디
// O(N)이며 n개의 동전값은 이전값의 배수이기 때문에 나눗셈 및 나머지연산 시 정확하게 0으로 떨어진다.

int main() {
	int n, k;
	int a[10];
	
	scanf_s("%d %d", &n, &k);

	for (int i = 0; i < n; i++) {
		scanf_s("%d", &a[i]);
	}
	int min = 0;
	for (int i = 9; i >= 0; i--) {
		min += k / a[i];
		k = k % a[i];
	}

	printf_s("%d", min);
}