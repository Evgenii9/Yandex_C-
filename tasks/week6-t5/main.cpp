/*
Author: vpetrigo
Task:
???? ????? n, ?? ????????????? 10, ? ?????? ???????? n ? n.
?????????, ???????? ?? ???? ?????? ???????????? ???????????? ??????? ?????????.
???????? ????? ?YES?, ???? ?????? ????????????, ? ????? ?NO? ? ????????? ??????.
Sample Input:
3
0 1 2
1 2 3
2 3 4
Sample Output:
YES

*/

#include <iostream>

using namespace std;

int main() {
    const int size = 10;
    int arr[size][size];
    int n;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> arr[i][j];
        }
    }

    bool sym = true;

    for (int i = 0; i < n && sym; ++i) {
        for (int j = 1; j < n && sym; ++j) {
            if (arr[i][j] != arr[j][i]) {
                sym = false;
            }
        }
    }

    if (sym) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}
