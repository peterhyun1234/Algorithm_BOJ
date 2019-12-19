#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    int num;
    cout << "받을 숫자의 갯수를 입력하세요 : ";
    cin >> num;
 
    vector <int> nums;
 
    cout << "숫자를 입력하세요 : ";
    int tmp0;
    for (int i = 0; i<num; i++) {
        cin >> tmp0;
        nums.push_back(tmp0);
    }
 
 
    //2차원 백터 생성
    vector <vector<int> > temp;
 
    //1차원 백터 tmp1생성
    vector<int> tmp1;
    // 2개의 원소를 tmp1에 넣어준후 
    tmp1.push_back(nums[0]);
    tmp1.push_back(nums[1]);
    //temp에 tmp1을 넣어줌
    temp.push_back(tmp1);
 
    //1차원 백터 tmp2생성
    vector<int> tmp2;
    tmp2.push_back(nums[2]);
    temp.push_back(tmp2);
 
    //1차원 백터 tmp3생성
    vector <int> tmp3;
    tmp3.push_back(nums[3]);
    tmp3.push_back(nums[4]);
    tmp3.push_back(nums[5]);
    tmp3.push_back(nums[6]);
    temp.push_back(tmp3);
 
 
    cout <<"<2차원 백터temp의 크기> temp.size() "<< temp.size() << endl;
    cout << "<1차원 백터tmp1의 크기> temp[0].size() " << temp[0].size() << endl;
    cout << "<1차원 백터tmp2의 크기> temp[1].size() " << temp[1].size() << endl;
    cout << "<1차원 백터tmp3의 크기> temp[2].size() " << temp[2].size() << endl;
    return 0;
}


출처: https://shjz.tistory.com/39 [밤머리 이야기]