#include <iostream>
using namespace std;

 
int main(void)
{
        ios_base::sync_with_stdio(0);
        cin.tie(0); //cin 실행속도 향상
        int N;
        cin >> N;

        int cur = 1;
    int result = 1;

        int inc = 6;
        while (1)
        {
                 if (N <= cur)
                         break;

                 result++;
                 cur += inc;
                 inc += 6;
        }
        cout << result << "\n";
        return 0;
}