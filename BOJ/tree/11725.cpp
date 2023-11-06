#include <iostream>
#include <vector>

using namespace std;

void findParents(int currentNode, vector<int> tree[100001], int parent[100001])
{
    for (int childNode : tree[currentNode]) {
        if (parent[childNode] == 0) {
            parent[childNode] = currentNode;
            findParents(childNode, tree, parent);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false); // C++의 IO 동기화 비활성화
    cin.tie(NULL); // cin과 cout의 tie를 해제

    int N;
    
    cin >> N;
    
    vector<int> tree[100001];
    int parent[100001];

    for (int i = 1; i <= N; i++)
    {
        parent[i] = 0;
    }

    for (int i = 0; i < N - 1; i++)
    {
        int node1, node2;

        cin >> node1 >> node2;
        tree[node1].push_back(node2);
        tree[node2].push_back(node1);
    }

    parent[1] = -1;
    findParents(1, tree, parent);

    for (int i = 2; i <= N; i++)
    {
        //endl은 출력 후 버퍼를 비우는 작업을 하므로 출력마다 오버헤드 추가 
        cout << parent[i] << '\n'; // endl 대신 '\n' 사용
    }
    
    return 0;
}