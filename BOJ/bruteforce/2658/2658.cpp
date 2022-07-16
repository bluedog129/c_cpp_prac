#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <cstring>
#include <set>
#include <map>
#include <cmath>
#include <utility>
#include <list>
#include <unordered_set>

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int board[10][10];
pii ans[3];

void init_board() {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            scanf("%d", &board[i][j]);
        }
    }
}

// 90도 회전
void rotate() {
    int tmp[10][10];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tmp[i][j] = board[i][j];
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            board[i][j] = tmp[9 - j][i];
        }
    }
}

// 위 꼭짓점 찾기
bool evaluatel() {
    int y = -1, x = -1;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (board[i][j] == 1) {
                y = i, x = j;
                break;
            }
        }
        if (y != -1) break;
    }
    if (y == -1) return false;

    ans[0] = {y, x};

    //위 꼭짓점에서부터 직각삼각형 만들기
    int tmp[10][10];
    memset(tmp, 0, sizeof(tmp));
    for (int i = 0; i + y < 10; i++) {
        if (board[i + y][x] == 1) {
            if (x - i < 0 || x + i) return false;
            ans[1] = {y + i, x + i};
            ans[2] = {y + i, x - i};
            for (int j = x - i; j <= x + i; j++) {
                tmp[i + y][j] = 1;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (tmp[i][j] != board[i][j]) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    init_board();

    for (int i = 0; i < 4; i++) {
        rotate();
        if (evaluatel()) {

        }
    }
}