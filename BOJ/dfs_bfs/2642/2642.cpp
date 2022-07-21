#include <iostream>
#include <string>
#include <cmath>
#include <set>
#include <unordered_map>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>
#define MAX 7

using namespace std;
bool answer = true;
int MAP[MAX][MAX];
pair<int, int> Pos[MAX];
int Face[MAX];
bool Path[MAX][MAX];
int moveY[4] = {-1, 0, 1, 0};
int moveX[4] = {0, -1, 0, 1};

void DFS(int Depth, int Dir, int Y, int X, int First) {
    for (int k = 0; k < 4; k++) {
        int nextY = Y + moveY[k];
        int nextX = X + moveX[k];
        int Next = MAP[nextY][nextX];
        if ((nextY >= 1) && (nextY <= 6) && (nextX >= 1) && (nextX <= 6) && (Next > 0) && (!Path[First][Next])) {
            Path[First][Next] = true;
            if (Dir == -1) {
                DFS(1, k, nextY, nextX, First);
            } else if((Dir == k) && (Depth == 1) && ((Face[First] == 0) || (Face[First] == Next)) && ((Face[Next] == 0) || (Face[Next] == First))) {
                Face[First] = Next;
                Face[Next] = First;
                DFS(Depth + 1, Dir, nextY, nextX, First);
            }
            else {
                DFS(Depth, Dir, nextY, nextX, First);
            }
        }

    }
}

int main() {
    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= 6; j++) {
            cin >> MAP[i][j];
            if (MAP[i][j] > 0) {
                Pos[MAP[i][j]] = make_pair(i, j);
            }
        }
    }

    for (int i = 1; i <= 6; i++) {
        int Y = Pos[i].first;
        int X = Pos[i].second;
        if ((Y == 0) && (X == 0)) {
            continue;
        }
        Path[i][i] = true;
        DFS(0, -1, Y, X, i); // 방향 미정
    }

    for (int i = 1; i <= 6; i++) {
        if (Face[i] == 0) {
            answer = false;
            break;
        }
    }
    if (answer) {
        cout << Face[1] << "\n";
    } else {
        cout << 0 << "\n";
    }
    return 0;
}