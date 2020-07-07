#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {

	ios_base::sync_with_stdio(false); // for 
	cin.tie(0);
	cout.tie(0);
	
	int n;
    cin >> n;

    vector<int> num(n);
	
    for(int i = 0; i < n; i++) 
        cin >> num[i];

	sort(num.begin(), num.end());

    for(int j = 0; j < n; j++) 
        cout << num[j] << "\n";

    return 0;

}