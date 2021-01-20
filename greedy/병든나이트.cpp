#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>

int main() {
	long long int N, M;
	long long int max = 1;
	scanf_s("%lld %lld", &N, &M);
	//N이 1일떄 대비 안되있음.
	if (N == 1) {
		max = 1;
	} 
	else if (N >= 3) {
		if (M >= 6) {
			max = M - 2;
		}
		else {
			if (M >= 4) {
				max = 4;
			}
			else {
				max = M;
			}
		}
	}
	else {
		if (M >= 7) {
			max = 4;
		}
		else {
			if (M % 2 == 0) {
				max = M / 2;
			}
			else {
				max = (M / 2) + (M % 2);
			}
		}
	}

	//if (N == 1) {
	//	max = 1;
	//}
	//else if (N == 2)
	//{
	//	max = (M + 1) / 2 > 4 ? 4 : (M + 1) / 2;
	//}
	//else {
	//	if (M > 6) {
	//		max = M - 2;
	//	}
	//	else {
	//		max = M > 4 ? 4 : M;
	//	}
	//}
	printf("%lld", max);

}
