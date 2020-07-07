// #include <iostream>

// using namespace std;

// int main() {
// 	int input_A = 0;
// 	int input_B = 0;
// 	int input_C = 0;
// 	int T_sales = 0;
// 	int T_product_cost = 0;
// 	int BEP = 0;

// 	cin >> input_A >> input_B >> input_C;
	
// 	T_product_cost = input_A + input_B * BEP;
// 	T_sales = input_C * BEP;

// 	if (T_product_cost < T_sales)
// 	{
// 		BEP = -1;
// 	}
// 	else
// 	{
// 		BEP++;
// 		while (true)
// 		{
// 			T_product_cost = input_A + input_B * BEP;
// 			T_sales = input_C * BEP;

// 			if (T_product_cost < T_sales)
// 				break;

// 			BEP++;
// 		}
// 	}

// 	cout << BEP << endl;

// 	return 0;
// }

#include <iostream>

typedef long long ll;

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	double a, b, c;
	// a : 생산고정비용 // b : 생산가변비용 // c : 판매가격
	double amount; // 판매량
	ll res;

	cin >> a >> b >> c;

	amount = a / (c - b);
	res = (ll)amount + 1;
	if (res <= 0) res = -1;


	cout << res << "\n";


}