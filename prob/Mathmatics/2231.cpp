#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {

    // 101*a + 11*b + 2*c 의 최소값
    int constructor = 0;
    
    int temp_decomposition;
    int decomposition;

    int temp;

    cin >> decomposition;

    for (int i = 1; i < decomposition; i++) {
        temp_decomposition = i;
        temp = i;
        while (temp > 0) {
            temp_decomposition = temp_decomposition + (temp % 10);
            temp = temp / 10;
        }

        if (temp_decomposition == decomposition) {
            constructor = i;
            break;
        }
 
    }

    cout << constructor << "\n";
    
    return 0;
}