#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> vec = {"c=","c-","dz=","d-","lj","nj","s=","z="};

    int offset = 0;
    string S;
    cin >> S;
    for (int i = 0; i < vec.size(); i++)
    {
        while (true)
        {
            offset = S.find(vec[i]);
            if(offset == string::npos)
                break;
            else
                S.replace(offset, vec[i].length(), ".");
        }  
    }
    cout << S.length();
}