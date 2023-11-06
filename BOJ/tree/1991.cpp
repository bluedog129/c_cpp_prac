#include <iostream>

using namespace std;

struct Node {
    char data;
    int left;
    int right;
};

void preorder(Node treeArr[50], int rootDataIdx)
{
    cout << static_cast<char>(rootDataIdx + 'A');
    if (treeArr[rootDataIdx].left != -1)
        preorder(treeArr, treeArr[rootDataIdx].left);
    if (treeArr[rootDataIdx].right != -1)
        preorder(treeArr, treeArr[rootDataIdx].right);
}

int main()
{
    Node treeArr[50];
    int N;
    cin >> N;

    char rootData, leftData, rightData;
    for (int i = 0; i < N; i++) {
        
        cin >> rootData >> leftData >> rightData;

        rootData -= 'A';
        if (leftData == '.')
            treeArr[rootData].left = -1;
        else
            treeArr[rootData].left = leftData - 'A';
        if (rightData == '.')
            treeArr[rootData].right = -1;
        else
            treeArr[rootData].right = rightData - 'A';
    }

    preorder(treeArr, 0);

    return 0;
}