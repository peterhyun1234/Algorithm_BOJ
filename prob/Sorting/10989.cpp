// 메모리 초과;
// 카운틴 정렬 사용

#include <iostream>
#include <vector>
#include <algorithm>

#define MAX 10001

using namespace std;

int main(void) {

	ios_base::sync_with_stdio(false); // for 
	cin.tie(0);
	cout.tie(0);
	
	int n;
    int input_num = 0;
    cin >> n;
    vector<int> num(MAX);
	
    for(int i = 0; i < n; i++){
        cin >> input_num;
        num[input_num]++;
    }

    for(int i = 0; i < MAX; i++){
        if(num[i]){
            for(int j = 0; j < num[i]; j++)
                cout << i << "\n";
        }
    }

    return 0;

}