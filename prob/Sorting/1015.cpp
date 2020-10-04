#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n = 0; 

	cin >> n;

	vector<pair<int, int>> A(n);
	vector<int> P(n, 0);

	for (int i = 0; i < n; i++) {
		cin >> A[i].first;
		A[i].second = i;
	}

	sort(A.begin(), A.end());

	for (int i = 0; i < n; i++) {
		P[A[i].second] = i;
	}

	for (int i = 0; i < n; i++) {
		cout << P[i] << " ";
	}
	cout << "\n";

	return 0;
}
