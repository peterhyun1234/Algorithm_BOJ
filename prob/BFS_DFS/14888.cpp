// 식의 계산은 연산자 우선 순위를 무시하고 앞에서부터 진행해야 한다
// 나눗셈은 정수 나눗셈으로 몫만 취한다.
// 식의 결과가 최대인 것과 최소인 것

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int n = 0;
vector<int> operands;
vector<int> operators(4, 0);

int max_value = INT_MIN;
int min_value = INT_MAX;

void dfs(int cur_result, int depth) {

	if (depth == n) {
		max_value = max(max_value, cur_result);
		min_value = min(min_value, cur_result);
		return;
	}

	for (int i = 0; i < 4; i++) {
		if (operators[i] > 0) {
			operators[i] --;
			if (i == 0) {
				dfs(cur_result + operands[depth], depth + 1);
			}
			else if (i == 1) {
				dfs(cur_result - operands[depth], depth + 1);
			}
			else if (i == 2) {
				dfs(cur_result * operands[depth], depth + 1);
			}
			else {
				dfs(cur_result / operands[depth], depth + 1);
			}
			operators[i] ++;
		}
	}

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		int input_num;
		cin >> input_num;
		operands.push_back(input_num);
	}

	for (int i = 0; i < 4; i++) {
		cin >> operators[i];
	}

	dfs(operands[0], 1);

	cout << max_value << "\n";
	cout << min_value << "\n";

	return 0;
}
