/**
*** Codility 006: TapeEquilibrium
*** URL: https://app.codility.com/programmers/lessons/3-time_complexity/tape_equilibrium/
**/

#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> &A) {
    vector<long long int> cumsum;
    int s = A.size();
    long long int sum = 0;
    long long int minDiff = INT_MAX;

    for(long long int i=0; i<s; ++i) {
        sum += A[i];
        cumsum.push_back(sum);
    }

    for(long long i=1; i<s; ++i) {
        long long int diff = abs(sum - (2 * cumsum[i-1]));
        minDiff = min(minDiff, diff);
    }

    return minDiff;
}

int main() { // Driver function
    freopen("in.txt", "r", stdin);

    int T;

    while(1 == scanf("%d", &T)) {
        vector<int> A;
        int n;
        while(T--) {
            scanf("%d", &n);
            A.push_back(n);
        }

        cout << solution(A) << endl;
    }

    return 0;
}
