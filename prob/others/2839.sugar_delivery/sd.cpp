// #include <iostream>

// using namespace std;

// int sol(int& n){
//     if(n<3)
//         return -1;
    
//     int bigMax = n/5;

//     while(bigMax >= 0){
//         int tmp = n - (5*bigMax);

//         if(tmp % 3 == 0){
//             return bigMax + (tmp%3);
//         }
//         bigMax --;
//     }
//     return -1;
// }

// int main(){
//     int n;
//     int result;
//     cin >> n;

//     result = sol(n);

//     cout << result;
//     return 0;
// }

#include <iostream>
using namespace std;
 
main()
{
    int n;
    int result;
    int c = 0;
    cin >> n;
 
    for (int i = n / 5; i >= 0; i--)
    {
        if (n%5 ==0)
        {
            result = n / 5;
            c = 1;
            break;
        }
        else
        {
            int k = n - (5 * i);
            for (int j = k / 3; j >= 0; j--)
            {
                if (k % 3 == 0)
                {
                    result = i + k / 3;
                    c = 1;
                    break;
                }
                else
                    result = -1;
            }
        }
        if (c == 1)
            break;
    }
 
    cout << result;
}

