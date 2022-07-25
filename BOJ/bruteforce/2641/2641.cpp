#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
	int n; // 모양수열 길이
	int cycle; // 표본 모양수열
	int count = 0; // 가능한 표본 모양수열 갯수
	string s; // 표본 모양수열 넣는 변수
	string ori1 = ""; // 시작점을 이동시킨 경우를 비교할 변수
	string ori2 = ""; // 리버스 하여 비교할 변수
	string result[101]; // 모양수열을 저장하는 배열

	cin >> n;

	for (int i = 0; i < n; ++i) {
		char c;
		cin >> c;

		ori1 += c;
		ori2 += (c + 1) % 4 + 1 + '0'; // 반대방향으로 진행하기 위해 화살표를 반대로 수정
	}
	reverse(ori2.begin(), ori2.end());

	cin >> cycle;

	while (cycle--) {
		s = "";
		for (int i = 0; i < n; ++i) {
			char c;
			cin >> c;

			s += c;
		}

		string temp = s;
 
		for (int i = 0; i < n; ++i) {
			if (temp == ori1 || temp == ori2) {
				result[count] = s;
				++count;
				break;
			}
			temp = temp.substr(1, temp.length()) + temp[0]; // 시작점을 한칸씩 옮겨줌
		}
	}

	cout << count << endl;

	for (int i = 0; i < count; ++i) {
		for (int j = 0; j < ori1.length(); ++j) {
			cout << result[i][j];
			if (j < ori1.length() - 1) {
				cout << " ";
			}
		}
		cout << endl;
	}

	return 0;
}