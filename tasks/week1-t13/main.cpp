/*
Author: vpetrigo
Task:
???????????? ?????
???? ?????????????? ?????. ??????????, ???????? ?? ??? ?????????? ?????? ????????????.
???? ????? ????????????, ?? ???????? 1, ????? ???????? ????? ?????? ????? ?????.
????? ????? ????? ?????? ??????? ??????, ????? ????? ???????, ??? ??? ?????????? ?????? ??????????? ????? ??????????? ??????.

?????? ??????? ??????
???????? ???????????? ?????.

?????? ???????? ??????
???????? ???? ????? ????? - ????? ?? ??????.

Sample Input 1:
2002
Sample Output 1:
1

Sample Input 2:
2008
Sample Output 2:
37

*/

#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    int p1, p2;

    p1 = n / 100;
    p2 = n % 100;

    p2 = p2 % 10 * 10 + p2 / 10;

    cout << (p2 - p1) + 1 << endl;

    return 0;
}
