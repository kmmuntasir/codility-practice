/**
*** Codility 003: Odd Occurrences In Array
*** URL: https://app.codility.com/programmers/lessons/2-arrays/odd_occurrences_in_array/
**/

#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> &A) {
    int s = A.size();
    unsigned long long int result = 0;

    for(int i = 0; i < s; ++i) {
        result ^= A[i];
    }

    return result;
}

int solution2(vector<int> &A) {
    map<int, int> m;
    map<int, int>:: iterator it;
    for(int i = 0; i < A.size(); ++i) {
        if(m.count(A[i])) {
            ++m[A[i]];
            m[A[i]] %= 2;
        } else {
            m[A[i]] = 1;
        }
    }

    for(it = m.begin(); it != m.end(); ++it) {
        if(1 == it->second) {
            return it->first;
        }
    }
}

int solution1(vector<int> &A) {
    map<int, int> m;
    for(int i = 0; i < A.size(); ++i) {
        if(m.count(A[i])) {
            ++m[A[i]];
            if(2 == m[A[i]]) {
                m.erase(A[i]);
            }
        } else {
            m[A[i]] = 1;
        }
    }
    return m.begin()->first;
}

int main() { // Driver function
    freopen("in.txt", "r", stdin);

    int number;
    vector<int> A;

    while(1 == scanf("%d", &number)) {
        A.push_back(number);
    }

    cout << solution(A) << endl;

    return 0;
}
