// 3×N 크기의 벽을 2×1, 1×2 크기의 타일로 채우는 경우의 수

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n = 0;
    int answer = 0;

    cin >> n;

    vector<int> dp(n + 1, 0);
    
    dp[0] = 1;
    dp[1] = 0;
    dp[2] = 3;

    for (int i = 4; i <= n; i += 2) {
        dp[i] += dp[i - 2] * 3;
        for (int j = i - 4; j >= 0; j -= 2) {
            dp[i] += 2 * dp[j];
        }
    }

    answer = dp[n];

    cout << answer << "\n";

    return 0;
}