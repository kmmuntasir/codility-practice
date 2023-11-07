/**
*** Codility 005: PermMissingElem
*** URL: https://app.codility.com/programmers/lessons/3-time_complexity/perm_missing_elem/
**/

#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> &A) {
	unsigned long long int n1 = A.size() + 1;
	unsigned long long int shouldBeSum = n1 * (n1 + 1) / 2;
	unsigned long long int actualSum = accumulate(A.begin(), A.end(), 0);

	return shouldBeSum - actualSum;
}

int main() { // Driver function
    freopen("in.txt", "r", stdin);

    int T;

    while(1 == scanf("%d", &T)) {
        vector<int> A;
        while(T--) {
            int n;
            scanf("%d", &n);
            A.push_back(n);
        }
        cout << solution(A) << endl;
    }


    return 0;
}
