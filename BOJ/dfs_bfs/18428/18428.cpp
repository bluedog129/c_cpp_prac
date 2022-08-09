#include <iostream>
#include <vector>
#include <algorithm>

#define INF 987654321

using namespace std;

char arr[6][6];
int dy[4][2] = { {-1,0},{1,0},{0,1},{0,-1} };
vector<pair<int,int> > e, t;
int N;

bool ch(int x,int y) {
	for (int k = 0; k < 4; k++) {
		int nx = x;
		int ny = y;
		while (nx >= 0 && ny >= 0 && nx < N && ny < N) {
			if (arr[nx][ny] == 'O') break;
			if (arr[nx][ny] == 'S') return false;
			nx += dy[k][0];
			ny += dy[k][1];
		}
	}
	return true;
}

void dfs(int cnt,int idx) {
	if (cnt == 3) {
		for (auto x : t) {
			if (!ch(x.first, x.second)) {
				return;
			}
		}
		cout << "YES\n";
		exit(0);
	}
	for (int i = idx; i < e.size(); i++) {
		arr[e[i].first][e[i].second] = 'O';
		dfs(cnt + 1, i+1);
		arr[e[i].first][e[i].second] = 'X';
	}
}

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 'T') {
				t.push_back({ i,j });
			}
			else if (arr[i][j] == 'X') {
				e.push_back({ i,j });
			}
		}
	}
	dfs(0, 0);
	cout << "NO\n";

	return 0;
}