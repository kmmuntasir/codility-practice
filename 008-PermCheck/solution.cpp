/**
*** Codility 008: PermCheck
*** URL: https://app.codility.com/programmers/lessons/4-counting_elements/perm_check/
**/

#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> &A) {
    int s = A.size();
    int total = 0;
    vector<int> flags(s, 0);

    for(int i = 0; i < s; ++i) {
        if(A[i] > s) {
            return 0;
        }
        else if(flags[A[i] - 1]) {
            return 0;
        } else {
            total++;
            flags[A[i] - 1] = 1;
        }
    }

    return total == s ? 1 : 0;
}

int solution1(vector<int> &A) {
    int s = A.size();
    long long maxx = 0, sum = 0;

    for(int i = 0; i < s; ++i) {
        if(A[i] > s) {
            return 0;
        }
        sum += A[i];
        if(A[i] > maxx) {
            maxx = A[i];
        }
    }

    long long neededSum = (maxx * (maxx + 1)) / 2;

    return sum == neededSum ? 1 : 0;
}

int main() { // Driver function
    freopen("in.txt", "r", stdin);

    int T;
    scanf("%d", &T);

    while(T--) {
        vector<int> A;
        int n, temp;
        scanf("%d", &n);
        while(n--) {
            scanf("%d", &temp);
            A.push_back(temp);
        }

        cout << solution(A) << endl;
    }

    return 0;
}
