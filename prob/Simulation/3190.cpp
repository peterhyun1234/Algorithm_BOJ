//뱀이 나와서 기어다니는데, 사과를 먹으면 뱀 길이가 늘어난다
//뱀이 이리저리 기어다니다가 벽 또는 자기자신의 몸과 부딪히면 게임이 끝난다.
//NxN 정사각 보드
//보드의 상하좌우 끝에 벽
//게임이 시작할때 뱀은 맨위 맨좌측에 위치하고 뱀의 길이는 1
//뱀은 처음에 오른쪽을 향한다.

//1. 뱀을 나타내기위해 덱을 사용한다. (머리 = front, 꼬리 = back)
//2. 꼬리를 자를 때(빈칸발견)는 back을 pop시킨다.(꼬리이므로)
//3. 길이가 길어질때는(사과발견) front에 머리좌표를 넣어주자.
//4. 뱀이 지나간 좌표를 맵에 표현(2) 하고, 없는 좌표는(꼬리가 짤린 좌표포함) 0으로 표현하자.
//5. 뱀이 지나갈 때 값이 2인좌표를 만나면 종료시키자.

#include<iostream>
#include<deque>
#include<vector>

using namespace std;

int dy[4] = { 0,-1,0,1 };
int dx[4] = { 1,0,-1,0 };
int map[101][101];
vector<pair<int, char>>v;
deque<pair<int, int>>dq;
int n, time;

void func()
{
	int y = 1, x = 1, go = 0, cnt = 0;
	dq.push_back({ y,x });
	map[y][x] = 2;
	while (1)
	{
		time++;
		int nx = x + dx[go];
		int ny = y + dy[go];
		if (nx<1 || ny<1 || nx>n || ny>n || map[ny][nx] == 2)
			return;

		else if (map[ny][nx] == 0)
		{
			map[ny][nx] = 2;
			map[dq.back().first][dq.back().second] = 0;
			dq.pop_back();
			dq.push_front({ ny,nx });
		}
		else if (map[ny][nx] == 1)
		{
			map[ny][nx] = 2;
			dq.push_front({ ny,nx });
		}

		if (cnt < v.size()) {
			if (time == v[cnt].first)
			{
				if (v[cnt].second == 'L')go = (go + 1) % 4;
				else if (v[cnt].second == 'D')go = (go + 3) % 4;
				cnt++;
			}
		}
		y = ny;
		x = nx;
	}
}

int main()
{
	int k, y, x, l, num;
	char c;
	//방향연산의 횟수 
	cin >> n >> k;
	for (int i = 1; i <= k; i++)
	{
		cin >> y >> x;
		map[y][x] = 1;
	}
	cin >> l;
	for (int i = 1; i <= l; i++)
	{
		cin >> num >> c;
		v.push_back(make_pair(num, c));
	}

	func();
	cout << time << endl;
}
