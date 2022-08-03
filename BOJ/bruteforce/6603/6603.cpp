#include<iostream>
using namespace std;

int num;
int lotto[14];
int result[6];
void dfs(int start, int depth) {
	
	if (depth == 6) {
		for (int i = 0; i < 6; i++) {
			cout << result[i] << " ";
		}
		cout << endl;
		return;
	}

	for (int i = start; i < num; i++) {
		result[depth] = lotto[i];
		dfs(i + 1, depth + 1);
	}

}
int main() {

	while (cin >> num && num) {
		for (int i = 0; i < num; i++) {
			cin >> lotto[i];
		}
		dfs(0, 0);
		cout << endl;
	}
	return 0;
}