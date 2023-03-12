/**
*** Codility 007: FrogRiverOne
*** URL: https://app.codility.com/programmers/lessons/4-counting_elements/frog_river_one/
**/

#include <bits/stdc++.h>

using namespace std;

int solution(int X, vector<int> &A) {
    int flags[100100] = {0};
    int s = A.size();
    int sum = 0;
    int neededSum = ((X*(X+1)) / 2);

    for(int i = 0; i < s; ++i) {
        if(0 == flags[A[i]]) {
            sum += A[i];
            if(sum == neededSum) {
                return i;
            }
        }
        ++flags[A[i]];
    }
    return -1;
}

int main() { // Driver function
    freopen("in.txt", "r", stdin);

    int T;
    scanf("%d", &T);

    while(T--) {
        vector<int> A;
        int n, x;
        scanf("%d", &n);
        while(n--) {
            scanf("%d", &x);
            A.push_back(x);
        }
        scanf("%d", &x);

        cout << solution(x, A) << endl;
    }

    return 0;
}
