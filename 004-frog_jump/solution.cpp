/**
*** Codility 004: Frog Jump
*** URL: https://app.codility.com/programmers/lessons/3-time_complexity/frog_jmp/
**/

#include <bits/stdc++.h>

using namespace std;

int solution(int X, int Y, int D) {
    return ceil((double(Y) - double(X)) / double(D));
}

int main() { // Driver function
    freopen("in.txt", "r", stdin);

    int x, y, d;

    while(3 == scanf("%d %d %d", &x, &y, &d)) {
        cout << solution(x, y, d) << endl;
    }

    return 0;
}
