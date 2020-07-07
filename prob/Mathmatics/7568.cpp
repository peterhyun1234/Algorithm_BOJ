#include <iostream>
#include <vector>
using namespace std;

typedef struct
{
    int height;
    int weight;
} user_info;

int main(void)
{

    int N;

    cin >> N;
    vector<user_info> user(N);

    for (int i = 0; i < N; i++)
    {

        int input_height, input_weight;

        cin >> input_height >> input_weight;
        user[i].height = input_height;
        user[i].weight = input_weight;
    }

    for (int i = 0; i < N; i++)
    {
        int ans = 0;
        for (int j = 0; j < N; j++)
        {
            if ((user[i].height < user[j].height) && (user[i].weight < user[j].weight))
                ans++;
        }
        cout << ans + 1 << " ";
    }

    return 0;
}
