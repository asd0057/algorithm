#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

bool a(int a, int b) {
	if (a > b) return true;
	else return false;
}

int main()
{
	int n;
	int result[26] = {0};
	string alph;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> alph;
		for (int j = 0; j < alph.size(); j++) {
			result[alph[j] - 'A'] += pow(10, alph.size() - 1 - j);
		}
	}

	sort(result, result + 26, a);

	int last = 0;
	for (int i = 0; i < 10; i++) {
		last += result[i] * (9 - i);
	}

	cout << last;
}


