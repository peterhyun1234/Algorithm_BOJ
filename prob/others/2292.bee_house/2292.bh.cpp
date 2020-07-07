// #include<iostream> 
// using namespace std; 
// int main() {
//     int hive = 6; // 두번쨰 벌집 방갯수 
//     int cnt = 1; //지나간 방 횟수 
//     int roomNum; // 찾을방 변수 
//     cin >> roomNum; //찾을 방 입력 
//     while (roomNum > hive) { 
//         cnt++; // 지나간 방 횟수증가 
//         hive *= 2; // 6 12 24 규칙적으로 증가함 
//     } 
//     cout << cnt; // 지나간 횟수 출력 
//     return 0; 
// }

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