#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include <string>
using namespace std;
vector<pair<int, int>> que;

n ^ 3으로도 풀리긴하지만 바보같았다.
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n = 0;
	cin >> n;
	int arr[10001] = { 0 };
	int max = 0;
	for (int i = 0; i < n; i++) {
		int d, p;
		cin >> p >> d;
		if (max < d) {
			max = d;
		}
		que.push_back(make_pair(d, p));
	}

	sort(que.begin(), que.end());

	for (int i = 0; i < n; i++) {
		int d, p;
		d = que[i].first;
		p = que[i].second;
		for (int j = d; j >= 1; j--) {
			if (arr[j] < p) {
				int temp = arr[j];
				arr[j] = p;
				p = temp;
			}
		}
	}
	int sum = 0;
	for (int i = 1; i <= max; i++) {
		sum += arr[i];
	}

	cout << sum;
}

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include <string>
using namespace std;
vector<pair<int, int>> que;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n = 0;
	cin >> n;
	que.resize(n);
	int arr[10001] = { 0 };
	int max = 0;
	for (int i = 0; i < n; i++) {
		cin >> que[i].second >> que[i].first;
		if (max < que[i].first) {
			max = que[i].first;
		}
	}

	sort(que.begin(), que.end());

	int sum = 0;
	priority_queue<int> q;
	for (int i = 0; i < n; i++) {
		sum += que[i].second;
		q.push(-que[i].second);
		if (que[i].first < q.size()) {
			sum += q.top();
			q.pop();
		}
	}

	cout << sum;
}