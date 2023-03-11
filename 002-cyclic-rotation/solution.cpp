/**
*** Codility 002: Cyclic Rotation
*** URL: https://app.codility.com/programmers/lessons/2-arrays/cyclic_rotation/
**/

#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> &A, int K) {
    vector<int> result;
    if(A.size() > 0) {
        int split = A.size() - (K % A.size());
        for(int i = split; i < A.size(); ++i) {
            result.push_back(A[i]);
        }
        for(int i = 0; i < split; ++i) {
            result.push_back(A[i]);
        }
    }

    return result;
}

int main() { // Driver function
    freopen("in.txt", "r", stdin);

    int items;

    while(1 == scanf("%d", &items)) {
        vector<int> arr;
        int k;
        while(items--) {
            scanf("%d", &k);
            arr.push_back(k);
        }
        scanf("%d", &k);
        arr = solution(arr, k);

        for (int i = 0; i < arr.size(); ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
