#include <iostream>

using namespace std;

int main(){
    long A, B, V, ans;

    cin >> A >> B >> V;
    
    ans = (V -B -1)/(A-B);

    cout << ans+1;
    
    return 0;
}